Symulator Układu Automatycznej Regulacji (UAR) z Modelem ARX
Opis Projektu
Projekt został zrealizowany w ramach studiów na kierunku Informatyka Przemysłowa (profil praktyczny) na Politechnice Śląskiej. Jest to aplikacja okienkowa symulująca pracę zamkniętego układu regulacji automatycznej w czasie rzeczywistym. 
Program pozwala na badanie dynamiki obiektów opisanych modelem ARX przy wykorzystaniu klasycznego algorytmu regulatora PID. Aplikacja kładzie duży nacisk na interakcję z użytkownikiem i wizualizację danych procesowych. 

Kluczowe Funkcjonalności
- Pełna parametryzacja symulacji: Możliwość definiowania nastaw regulatora PID oraz współczynników wielomianów modelu ARX.
- Generator sygnałów: Wybór typu sygnału zadającego (np. skok jednostkowy, sinusoida, prostokąt).
- Kontrola czasu: Regulacja szybkości symulacji "w locie", co pozwala na dokładną analizę stanów nieustalonych.
- Zaawansowana wizualizacja (3 niezależne wykresy):
  - Wykres Procesu: Porównanie wartości zadanej oraz wartości regulowanej.
  - Analiza Regulatora: Podgląd składowych sygnału sterującego (P, I, D) generowanych przez regulator.
  - Wykres Uchybu: Obserwacja różnicy między sygnałem zadanym a wyjściem obiektu.

Technologie i Biblioteki
- Język: C++ (standard obiektowy).
- Framework: Qt (GUI, obsługa zdarzeń, Timery).
- Wizualizacja danych: Biblioteka QCustomPlot (zapewniająca płynne renderowanie wykresów w czasie rzeczywistym).
