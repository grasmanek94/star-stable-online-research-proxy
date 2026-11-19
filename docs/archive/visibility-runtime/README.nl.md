[English](README.md) | [Polski](README.pl.md) | [Nederlands](README.nl.md)

# Star Stable Online FPS Fixer

Deze onofficiële plugin voor Windows kan Star Stable Online soepeler laten draaien door dingen te verbergen die de game moet tekenen en animeren. Hoeveel FPS je erbij krijgt, hangt af van je computer en de plek waar je bent.

> **Risico op een accountban:** Het installeren en gebruiken van deze plugin is waarschijnlijk in strijd met de [voorwaarden van Star Stable](https://help.starstable.com/hc/en-us/articles/4404692524946-Your-License-to-use-the-game-service) en **kan ertoe leiden dat je account wordt geblokkeerd**. Star Stable zegt dat het [optreedt tegen accounts die ongeoorloofde aanpassingen gebruiken](https://www.starstable.com/en/article/player-safety). Dit project claimt geen toestemming van Star Stable. De ReShade-versie brengt hetzelfde risico met zich mee.

Standaard verbergt de plugin **de personages, paarden en huisdieren van andere spelers**. Je eigen personage, paard en huisdieren blijven zichtbaar.

Je kunt ook instellingen kiezen die het volgende verbergen:

- NPC-personages, hun paarden en dieren.
- Paarden zonder ruiter en paarden die te koop staan.
- Munten en andere verzamelobjecten, vraagtekens en uitroeptekens voor opdrachten, en zwevende tekst of tekstballonnen van NPC's.
- Decoratieve deeltjeseffecten zoals rook, stof, lichtgloed en bladeren, plus kleine graspollen.

## Downloaden en installeren

1. **Sluit Star Stable af.**
2. Open de **[releasepagina](https://github.com/grasmanek94/star-stable-online-quality-of-life-improver/releases)** en kies de versie die je wilt. Voor de eenvoudigste installatie download je het ZIP-bestand waarvan de naam eindigt op **`-PROXY-win64.zip`**.
3. Klik met de rechtermuisknop op het ZIP-bestand en kies **Alles uitpakken**. Het bevat `opengl32.dll` en `SSOVisibility.ini`.
4. Kopieer beide bestanden naar de **`client`-map** van de game, naast **`SSOClient.exe`**. Je kunt op je computer naar dat bestand zoeken om de juiste map te vinden.
5. Start de game zoals je gewend bent, ga de spelwereld in en druk op **F5**.

Installeer maar één versie van de plugin. Sluit de game af voordat je een update installeert en vervang het pluginbestand. Bewaar je bestaande `SSOVisibility.ini` als je instellingen hebt aangepast.

**Gebruik je al ReShade?** Bewaar de `opengl32.dll` van ReShade. Download in plaats daarvan `-RESHADE-win64.zip` en zet `SSOVisibility.addon64` samen met het INI-bestand in je ReShade-addonsmap. Hiervoor heb je de 64-bits versie van ReShade met volledige addonondersteuning nodig. De ASI- en PLUGIN-versies vereisen een geschikte loader; zie de Engelstalige [handleiding voor ontwikkelaars](README-DEVELOPERS.md#loader-choices).

## Toetsen

Gebruik deze toetsen terwijl het gamevenster actief is. **Zet NumLock aan.** Met “Num” bedoelen we het numerieke toetsenblok aan de rechterkant van je toetsenbord.

| Toets | Wat doet het? |
|---|---|
| **F5** | Schakelt verbergen in met de gekozen preset. Je begint met preset **8**. |
| **F6** | Schakelt verbergen uit en maakt alles weer zichtbaar. Het kan een paar seconden duren voordat alles terugkomt. |
| **Ctrl + Num 0** | Verbergt zoveel als deze plugin ondersteunt. |
| **Ctrl + Num 1–9** | Kiest die preset en schakelt verbergen in. Zie de lijst hieronder. |
| **F7** | Laadt je opgeslagen INI-instellingen opnieuw. |

## Presets: hoeveel wordt er verborgen?

Begin met **8**. Lagere nummers verbergen meer; hogere nummers laten meer zichtbaar.

| Ctrl + Num | Standaardgedrag |
|---|---|
| **0** | Alle filters, inclusief munten, opdrachtmarkeringen, NPC-tekst en het verbergen van alle ondersteunde deeltjeseffecten. |
| **1** | Hetzelfde als 0, maar opdrachtmarkeringen blijven zichtbaar. |
| **2** | Hetzelfde als 1, maar zwevende NPC-tekst en tekstballonnen blijven ook zichtbaar. |
| **3** | Hetzelfde als 2, maar munten en verzamelobjecten blijven ook zichtbaar. |
| **4** | Hetzelfde als 3, maar verbergt alleen geselecteerde decoratieve deeltjeseffecten in plaats van alle deeltjeseffecten. |
| **5** | Hetzelfde als 4, met extra bescherming voor herkende visuele aanwijzingen bij races en opdrachten. |
| **6** | Hetzelfde als 5, maar NPC-personages blijven ook zichtbaar. |
| **7** | Verbergt de personages, paarden en huisdieren van andere spelers, geselecteerde decoratieve deeltjeseffecten en kleine graspollen. |
| **8 — standaard** | Verbergt alleen de personages, paarden en huisdieren van andere spelers. |
| **9** | Verbergt alleen de personages en paarden van andere spelers. Hun huisdieren blijven zichtbaar. |

**0–4 zijn agressieve instellingen.** Ze kunnen nuttige race- of opdrachteffecten, mist en je eigen decoratieve deeltjeseffecten verbergen. **5–9 zijn bedoeld voor normaal spelen**, maar geen enkele preset herkent alle belangrijke beelden. Je kunt nog steeds tegen verborgen objecten aanlopen; ze kunnen je dus blijven tegenhouden. Druk op **F6** als je alles weer wilt zien.

## Instellingen aanpassen

Open `SSOVisibility.ini` in Kladblok. Zet onder `[Preset1]` tot en met `[Preset9]` een categorie op **`1` om die te verbergen** of op **`0` om die zichtbaar te houden**. Sla het bestand op, druk in de game op **F7** en kies daarna de preset met **Ctrl + Num**. Wil je met een andere preset beginnen? Verander dan het nummer in `DefaultPreset=8` onder `[General]` en start de game opnieuw. Preset 0 schakelt altijd alle filters in en kan niet worden aangepast.

## Als het niet werkt

- Controleer of de plugin en het INI-bestand naast het juiste gamebestand staan. Ga de spelwereld in voordat je op F5 drukt.
- Controleer NumLock en gebruik het numerieke toetsenblok om presets te kiezen.
- Na een game-update kan een nieuwere pluginversie nodig zijn. Kijk op de [releasepagina](https://github.com/grasmanek94/star-stable-online-quality-of-life-improver/releases). De plugin schrijft details naar `SSO-visibility.log`, naast het pluginbestand.

Wil je de plugin verwijderen? Sluit de game af en verwijder het pluginbestand dat je hebt geïnstalleerd en het bijbehorende INI-bestand. Bewaar bestanden die bij ReShade of een andere loader horen.
