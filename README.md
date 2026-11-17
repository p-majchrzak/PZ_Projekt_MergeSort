# PZ_Projekt_MergeSort

## Opis projektu

Projekt przedstawia implementację algorytmu sortowania przez scalanie (**Merge Sort**) w języku C++.

Algorytm został zaimplementowany w postaci klasy szablonowej `MergeSort<T>`, dzięki czemu może obsługiwać różne typy liczbowe bez konieczności tworzenia osobnych implementacji.

Projekt wykorzystuje system budowania **CMake** oraz bibliotekę **Google Test** do przeprowadzania testów jednostkowych.

## Funkcjonalności

- Implementacja algorytmu Merge Sort.
- Rekurencyjny podział tablicy na mniejsze części.
- Scalanie posortowanych fragmentów.
- Obsługa typów `int`, `long int`, `float` oraz `double`.
- Sprawdzanie, czy tablica jest posortowana rosnąco.
- Obsługa pustych tablic, pojedynczych elementów i duplikatów.
- Testy jednostkowe z wykorzystaniem Google Test.

## Struktura projektu

```text
PZ_Projekt_MergeSort/
│
├── CMakeLists.txt
├── .gitignore
├── README.md
│
├── Projekt/
│   ├── include/
│   │   └── MergeSort.h
│   │
│   ├── src/
│   │   └── main.cpp
│   │
│   └── tests/
│       ├── MergeSortTests.cpp
│       └── MergeSortTypeTests.cpp
│
└── Wytyczne/
    └── zadanie3.pdf
```

## Wykorzystane technologie

- **C++17** – język programowania.
- **CMake** – konfiguracja i budowanie projektu.
- **Google Test** – testy jednostkowe.
- **Git** – kontrola wersji.

## Wymagania

Do skompilowania projektu wymagane są:

- Kompilator obsługujący standard C++17.
- CMake w wersji 3.20 lub nowszej.
- Dostęp do Internetu podczas pierwszej konfiguracji, ponieważ Google Test jest pobierany automatycznie przez CMake.

## Kompilacja projektu

W głównym katalogu repozytorium wykonaj:

```bash
cmake -S . -B build
cmake --build build
```

## Uruchamianie programu

Po skompilowaniu projektu uruchom:

```bash
./build/MergeSort
```

Program prezentuje działanie algorytmu na przykładowej tablicy liczb całkowitych oraz zmiennoprzecinkowych.

## Testy jednostkowe

Projekt wykorzystuje bibliotekę Google Test.

Aby uruchomić wszystkie testy, wykonaj:

```bash
ctest --test-dir build --output-on-failure
```

Testy obejmują między innymi:

- Tablice już posortowane.
- Tablice posortowane odwrotnie.
- Tablice z losowymi wartościami.
- Liczby ujemne i dodatnie.
- Powtarzające się wartości.
- Puste tablice.
- Tablice zawierające jeden element.
- Tablice dwuelementowe.
- Duże tablice.
- Obsługę różnych typów liczbowych.

## Złożoność algorytmu

| Właściwość | Złożoność |
|---|---|
| Najlepszy przypadek | O(n log n) |
| Średni przypadek | O(n log n) |
| Najgorszy przypadek | O(n log n) |
| Dodatkowa pamięć | O(n) |

Algorytm Merge Sort dzieli tablicę na mniejsze fragmenty, sortuje je rekurencyjnie, a następnie scala w jedną uporządkowaną tablicę.

## Autor

**Piotr Majchrzak**
