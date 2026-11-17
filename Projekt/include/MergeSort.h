
#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <cstddef>
#include <type_traits>
#include <vector>

/**
 * @brief Klasa szablonowa implementujaca algorytm sortowania przez scalanie.
 *
 * Klasa obsluguje typy arytmetyczne, w tym int, long int, float oraz double.
 *
 * @tparam T Typ elementow przechowywanych w tablicy.
 */
template <typename T>
class MergeSort {
    static_assert(std::is_arithmetic<T>::value,
        "MergeSort requires an arithmetic type.");

public:
    /**
     * @brief Sprawdza, czy podana tablica jest posortowana rosnaco.
     *
     * @param values Tablica elementow do sprawdzenia.
     * @return true, jesli tablica jest posortowana rosnaco.
     * @return false, jesli tablica nie jest posortowana.
     */
    static bool isSorted(const std::vector<T>& values);

    /**
     * @brief Sortuje podana tablice rosnaco za pomoca algorytmu Merge Sort.
     *
     * @param values Tablica elementow przeznaczona do posortowania.
     */
    static void sort(std::vector<T>& values);

private:
    /**
     * @brief Rekurencyjnie dzieli tablice na mniejsze fragmenty i sortuje je.
     *
     * @param values Tablica przeznaczona do posortowania.
     * @param left Indeks poczatku sortowanego fragmentu.
     * @param right Indeks konca sortowanego fragmentu.
     */
    static void mergeSort(std::vector<T>& values, std::size_t left, std::size_t right);

    /**
     * @brief Scala dwa posortowane fragmenty tablicy w jeden posortowany fragment.
     *
     * @param values Tablica zawierajaca scalane fragmenty.
     * @param left Indeks poczatku pierwszego fragmentu.
     * @param middle Indeks konca pierwszego fragmentu.
     * @param right Indeks konca drugiego fragmentu.
     */
    static void merge(std::vector<T>& values, std::size_t left,
        std::size_t middle, std::size_t right);
};

/**
 * @brief Sprawdza, czy elementy tablicy sa uporzadkowane rosnaco.
 */
template <typename T>
bool MergeSort<T>::isSorted(const std::vector<T>& values) {
    for (std::size_t index = 1; index < values.size(); ++index) {
        if (values[index - 1] > values[index]) {
            return false;
        }
    }

    return true;
}

/**
 * @brief Rozpoczyna sortowanie calej tablicy.
 */
template <typename T>
void MergeSort<T>::sort(std::vector<T>& values) {
    if (values.size() < 2) {
        return;
    }

    mergeSort(values, 0, values.size() - 1);
}

/**
 * @brief Dzieli tablice na dwie czesci i wywoluje sortowanie rekurencyjne.
 */
template <typename T>
void MergeSort<T>::mergeSort(std::vector<T>& values, std::size_t left, std::size_t right) {
    if (left >= right) {
        return;
    }

    const std::size_t middle = left + (right - left) / 2;

    mergeSort(values, left, middle);
    mergeSort(values, middle + 1, right);

    merge(values, left, middle, right);
}

/**
 * @brief Scala dwa fragmenty tablicy w odpowiedniej kolejnosci.
 */
template <typename T>
void MergeSort<T>::merge(std::vector<T>& values, std::size_t left,
    std::size_t middle, std::size_t right) {

    std::vector<T> leftPart(
        values.begin() + left,
        values.begin() + middle + 1
    );

    std::vector<T> rightPart(
        values.begin() + middle + 1,
        values.begin() + right + 1
    );

    std::size_t leftIndex = 0;
    std::size_t rightIndex = 0;
    std::size_t mergedIndex = left;

    while (leftIndex < leftPart.size() && rightIndex < rightPart.size()) {
        if (leftPart[leftIndex] <= rightPart[rightIndex]) {
            values[mergedIndex] = leftPart[leftIndex];
            ++leftIndex;
        }
        else {
            values[mergedIndex] = rightPart[rightIndex];
            ++rightIndex;
        }

        ++mergedIndex;
    }

    while (leftIndex < leftPart.size()) {
        values[mergedIndex] = leftPart[leftIndex];
        ++leftIndex;
        ++mergedIndex;
    }

    while (rightIndex < rightPart.size()) {
        values[mergedIndex] = rightPart[rightIndex];
        ++rightIndex;
        ++mergedIndex;
    }
}

#endif
