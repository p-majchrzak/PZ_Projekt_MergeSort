
#include <iostream>
#include <vector>

#include "MergeSort.h"

/**
 * @brief Glowna funkcja programu.
 *
 * Tworzy przykladowe tablice liczb calkowitych i zmiennoprzecinkowych,
 * sortuje je za pomoca algorytmu Merge Sort, a nastepnie wyswietla
 * posortowane elementy oraz sprawdza poprawnosc sortowania.
 *
 * @return 0 w przypadku poprawnego zakonczenia programu.
 */
int main() {
    // Przykladowe tablice z liczbami roznych typow.
    std::vector<int> numbers = {8, 3, 6, 1, 9, 2, 5, 4};
    std::vector<double> decimalNumbers = {4.5, 2.1, 8.7, 1.3, 6.9};

    // Sortowanie obu tablic.
    MergeSort<int>::sort(numbers);
    MergeSort<double>::sort(decimalNumbers);

    // Wyswietlenie posortowanej tablicy liczb calkowitych.
    std::cout << "Sorted integer array: ";

    for (const int number : numbers) {
        std::cout << number << " ";
    }

    // Sprawdzenie poprawnosci sortowania liczb calkowitych.
    std::cout << "\nInteger array status: "
        << (MergeSort<int>::isSorted(numbers) ? "Correct" : "Incorrect");

    // Wyswietlenie posortowanej tablicy liczb zmiennoprzecinkowych.
    std::cout << "\n\nSorted double array: ";

    for (const double number : decimalNumbers) {
        std::cout << number << " ";
    }

    // Sprawdzenie poprawnosci sortowania liczb zmiennoprzecinkowych.
    std::cout << "\nDouble array status: "
        << (MergeSort<double>::isSorted(decimalNumbers) ? "Correct" : "Incorrect");

    std::cout << '\n';

    return 0;
}
