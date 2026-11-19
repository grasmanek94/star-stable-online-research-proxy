[English](README.md) | [Polski](README.pl.md) | [Nederlands](README.nl.md)

# Star Stable Online FPS Fixer

Ta nieoficjalna wtyczka dla Windows może poprawić płynność gry Star Stable Online, ukrywając elementy, które gra musi rysować i animować. Efekt zależy od komputera i miejsca w grze.

> **Ryzyko blokady konta:** Instalowanie i używanie tej wtyczki prawdopodobnie narusza [regulamin Star Stable](https://help.starstable.com/hc/en-us/articles/4404692524946-Your-License-to-use-the-game-service) i **może skutkować zbanowaniem konta**. Star Stable informuje, że [podejmuje działania wobec kont korzystających z niedozwolonych modyfikacji](https://www.starstable.com/en/article/player-safety). Projekt nie deklaruje zgody Star Stable na jego używanie. Wersja dla ReShade wiąże się z takim samym ryzykiem.

Domyślnie wtyczka ukrywa **postacie, konie i zwierzątka innych graczy**. Twoja postać, koń i zwierzątka pozostają widoczne.

Możesz też wybrać ustawienia ukrywające:

- Postacie NPC, ich konie i zwierzęta.
- Konie bez jeźdźca i konie wystawione na sprzedaż.
- Monety i inne przedmioty do zebrania, znaki zapytania i wykrzykniki nad zadaniami oraz napisy i dymki dialogowe NPC.
- Ozdobne efekty cząsteczkowe, takie jak dym, kurz, poświaty i liście, a także drobną trawę.

## Pobieranie i instalacja

1. **Zamknij Star Stable.**
2. Otwórz **[stronę wydań](https://github.com/grasmanek94/star-stable-online-quality-of-life-improver/releases)** i wybierz wersję. Najprostsza instalacja wymaga pliku ZIP, którego nazwa kończy się na **`-PROXY-win64.zip`**.
3. Kliknij ZIP prawym przyciskiem myszy i wybierz **Wyodrębnij wszystkie**. W środku są `opengl32.dll` i `SSOVisibility.ini`.
4. Skopiuj oba pliki do folderu **`client`** gry, obok **`SSOClient.exe`**. Jeśli nie wiesz, gdzie jest ten folder, wyszukaj ten plik na komputerze.
5. Uruchom grę jak zwykle, wejdź do świata gry i naciśnij **F5**.

Zainstaluj tylko jedną wersję wtyczki. Podczas aktualizacji zamknij grę i podmień plik wtyczki. Zachowaj swój `SSOVisibility.ini`, jeśli zmieniono w nim ustawienia.

**Korzystasz już z ReShade?** Zachowaj jego `opengl32.dll`. Pobierz wersję `-RESHADE-win64.zip` i umieść `SSOVisibility.addon64` razem z plikiem INI w folderze dodatków ReShade. Potrzebna jest 64-bitowa wersja ReShade z pełną obsługą dodatków. Wersje ASI i PLUGIN wymagają zgodnego programu ładującego; szczegóły są w [poradniku dla programistów](README-DEVELOPERS.md#loader-choices) po angielsku.

## Klawisze

Używaj ich, gdy okno gry jest aktywne. **Włącz NumLock.** „Num” oznacza klawiaturę numeryczną po prawej stronie klawiatury.

| Klawisz | Działanie |
|---|---|
| **F5** | Włącza ukrywanie według wybranego zestawu ustawień. Na początku wybrany jest zestaw **8**. |
| **F6** | Wyłącza ukrywanie i przywraca widoczność. Powrót obiektów może potrwać kilka sekund. |
| **Ctrl + Num 0** | Ukrywa wszystko, co obsługuje ta wtyczka. |
| **Ctrl + Num 1–9** | Wybiera dany zestaw ustawień i włącza ukrywanie. Lista poniżej. |
| **F7** | Ponownie wczytuje zapisane ustawienia z pliku INI. |

## Zestawy ustawień: ile elementów znika?

Zacznij od **8**. Niższe numery ukrywają więcej, a wyższe pozostawiają więcej widocznych elementów.

| Ctrl + Num | Domyślne działanie |
|---|---|
| **0** | Wszystkie filtry, w tym monety, znaczniki zadań, tekst NPC i szerokie ukrywanie efektów cząsteczkowych. |
| **1** | Jak 0, ale pozostawia znaczniki zadań. |
| **2** | Jak 1, dodatkowo pozostawia napisy i dymki dialogowe NPC. |
| **3** | Jak 2, dodatkowo pozostawia monety i przedmioty do zebrania. |
| **4** | Jak 3, ale ukrywa tylko wybrane ozdobne efekty cząsteczkowe zamiast wszystkich. |
| **5** | Jak 4, z dodatkową ochroną rozpoznanych elementów wizualnych wyścigów i zadań. |
| **6** | Jak 5, dodatkowo pozostawia postacie NPC. |
| **7** | Ukrywa postacie, konie i zwierzątka innych graczy, wybrane ozdobne efekty cząsteczkowe oraz drobną trawę. |
| **8 — domyślny** | Ukrywa tylko postacie, konie i zwierzątka innych graczy. |
| **9** | Ukrywa tylko postacie i konie innych graczy. Ich zwierzątka pozostają widoczne. |

**0–4 to agresywne ustawienia.** Mogą ukrywać przydatne efekty wyścigów i zadań, mgłę oraz ozdobne efekty twojej postaci. **5–9 są przeznaczone do zwykłej gry**, ale żaden zestaw nie rozpoznaje wszystkich ważnych elementów. Ukrycie obiektu nie usuwa jego kolizji: niewidoczny obiekt nadal może blokować przejazd. Naciśnij **F6**, gdy potrzebujesz ponownie widzieć wszystko.

## Zmiana ustawień

Otwórz `SSOVisibility.ini` w Notatniku. W sekcjach `[Preset1]`–`[Preset9]` ustaw **`1`, aby ukrywać** daną kategorię, lub **`0`, aby pozostała widoczna**. Zapisz plik, naciśnij **F7** w grze i wybierz zestaw przez **Ctrl + Num**. Aby zmienić zestaw wybierany po uruchomieniu, zmień numer w `DefaultPreset=8` w sekcji `[General]` i uruchom grę ponownie. Zestaw 0 zawsze włącza wszystkie filtry i nie można go zmienić.

## Jeśli coś nie działa

- Sprawdź, czy wtyczka i INI są obok właściwego pliku gry. Wejdź do świata gry przed naciśnięciem F5.
- Sprawdź NumLock i wybieraj zestawy na klawiaturze numerycznej.
- Aktualizacja gry może wymagać nowszej wersji wtyczki. Sprawdź [stronę wydań](https://github.com/grasmanek94/star-stable-online-quality-of-life-improver/releases). Szczegóły błędów są zapisywane w `SSO-visibility.log` obok pliku wtyczki.

Aby odinstalować wtyczkę, zamknij grę i usuń zainstalowany plik wtyczki oraz jej INI. Zachowaj pliki należące do ReShade lub innego programu ładującego.
