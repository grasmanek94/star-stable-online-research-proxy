"""Synthetic grammar/boundary checks, not captured/native/server comparisons."""
import json
from pathlib import Path
from decode_actor_payload import decode, DecodeError, Reader


def run():
    # Hand-assembled field groups. Their expected sizes follow the reviewed readers.
    player = (b"\x96\x01\x07" + b"\x01A\x01B" + b"\0" + b"\0"*9 +
              b"\0\0" + b"\x01\x03\xAC\x02" + b"\0"*12 + b"\0"*8 +
              b"\0\0\0" + b"\0"*8 + b"\0\0\0")
    # horse_id300, empty name, owner150, two scalar zeros, transform,
    #13 slot-state bytes, empty equipment, three u32, s32(-1),u32,s32(-2),10 bytes.
    horse = (b"\xAC\x02\0\x96\x01\0\0" + b"\0"*12 + b"\0"*8 +
             b"\0"*13 + b"\0" + b"\0\0\0\x01\0\x03" + b"\0"*10)
    master_horse = horse + b"\0"*16 + b"\0\0" + b"\0"*8
    movement0 = b"\0" + b"\0"*12 + b"\0"*8 + b"\0"*12 + b"\0"*8 + b"\0\0"
    state0 = b"\0\0\0\0\0\0" + movement0 + b"\0\0\0\0\0"
    assert len(movement0) == 43 and len(state0) == 54
    movement1 = b"\0" + b"\0"*12 + b"\0"*8 + b"\0"*12 + b"\0"*12 + b"\0"*8 + b"\0"
    # Present transform; movement1; present pet motion with optional value300.
    pet = b"\0"*12 + b"\0"*8 + b"\x01\xAC\x02\x00\x01"
    state1 = (b"\0\0\0\0\x01" + b"\0"*20 + b"\x01" + movement1 +
              b"\x01" + pet + b"\0\0\x01\x7F\0")
    spawn = b"\0\0" + player + horse
    decoded = decode(285, spawn)["body"]
    assert decoded["player"]["player_id"] == 150 and decoded["player"]["user_id"] == 7
    assert decoded["player"]["equipment"] == [{"slot":3,"item_id":300}]
    assert decoded["horse"]["horse_id"] == 300 and decoded["horse"]["owner_player_id"] == 150
    assert decoded["horse"]["f172"] == -1 and decoded["horse"]["f180"] == -2
    assert decoded["horse"]["_span"][0] == 2 + len(player)
    assert decoded["horse"]["_span"][1] == len(spawn)
    assert decode(192, master_horse)["body"]["base"]["horse_id"] == 300

    first = b"\x96\x01" + state0
    second = b"\x01" + state1
    batch = decode(282, first + second)["records"]
    assert [r["player_id"] for r in batch] == [150,1]
    assert batch[0]["_span"] == [0,len(first)] and batch[1]["_span"] == [len(first),len(first+second)]
    assert batch[1]["state"]["pet_motion"]["value"]["ground_state"] == 1
    assert batch[1]["state"]["movement"]["tag"] == 1
    assert decode(282,b"")["records"] == []

    pushes = {
        1:b"\x96\x01\xAC\x02\x02\x0A",
        2:b"\x96\x01\xAC\x02\x02\x0A\x01",
        3:b"\x96\x01\x03Fox", 4:b"\x01p\x96\x01\x00",
        5:master_horse,6:master_horse,
        7:b"\x96\x01\xAC\x02\x02\x01\x01\x01\x02\x03\x03\x04",
        8:b"\x96\x01\x01\xAC\x02",9:b"\x96\x01\x02\xAC\x02",
        10:b"\x96\x01\x04",11:b"\x96\x01\x01\x02\x03\x04\x05\x06",
        12:b"\x96\x01\x01\x02\x03",
    }
    samples = [(285,spawn),(286,b"\x96\x01"),(192,master_horse),
               (282,first),(282,second),(203,b"\xAC\x02\x02\x0A\xAC\x02\x01")]
    for subtype,body in pushes.items():
        payload = bytes([subtype]) + body
        assert decode(284,payload)["consumed"] == len(payload)
        samples.append((284,payload))
    master = player + b"\0"*7 + master_horse + b"\0\x03xyz"
    local = decode("master",master)["body"]
    assert local["player"]["player_id"] == 150
    assert local["contained_stream"] == {"length":3,"hex":"78797a"}
    samples.append(("master",master))
    archive = decode(187,b"\x02"+master_horse+master_horse)["body"]
    assert len(archive) == 2 and archive[1]["_span"][0] == 1+len(master_horse)
    swapped = decode(228,b"\x07"+master_horse+master_horse)["body"]
    assert swapped["value"] == 7 and swapped["horse_b"]["_span"][1] == 1+2*len(master_horse)
    modified = decode(225,b"\x07"+master_horse+b"\x09")["body"]
    assert modified["value2"] == 9
    assert decode(280,state0+b"\x96\x01")["body"]["time"] == 150
    samples.extend([(187,b"\x02"+master_horse+master_horse),
                    (228,b"\x07"+master_horse+master_horse),
                    (225,b"\x07"+master_horse+b"\x09"),(280,state0+b"\x96\x01")])
    truncated_rejected = 0
    for message,payload in samples:
        for end in range(len(payload)):
            if (message == 282 and end == 0):
                continue # empty position batch is a valid syntax case
            try:
                decode(message,payload[:end])
            except DecodeError:
                truncated_rejected += 1
            else:
                raise AssertionError(("Accepted partial record",message,end))
    for message,payload in [(285,spawn+b"\0"),(286,b"\x01\0"),(284,b"\x0A\x01\0\0"),
                            (284,b"\x0D\0"),(283,b"\0"),(286,b"\xFF"*5),
                            (286,b"\xFF\xFF\xFF\xFF\x7F")]:
        try:
            decode(message,payload)
        except DecodeError:
            pass
        else:
            raise AssertionError(("Accepted malformed/unsupported payload",message))
    # Check standalone minimum sizes independently of the nonzero-ID fixtures.
    for name,size in [("PlayerShared",51),("HorseBase",55),("HorseMaster",81)]:
        reader = Reader(b"\0"*size)
        reader.read(name)
        assert reader.offset == size
    return {"status":"passed", "synthetic_push_subtypes":len(pushes),
            "structured_samples":len(samples),"truncated_prefixes_rejected":truncated_rejected,
            "position_record_spans_checked":2,
            "limit":"Synthetic grammar tests only; no native differential execution, packet capture, or server acceptance test."}


if __name__ == "__main__":
    result = run()
    print(json.dumps(result))
