
/**
 * @file MergeSortTypeTests.cpp
 * @brief Testy jednostkowe sprawdzajace obsluge roznych typow liczbowych.
 *
 * Plik zawiera testy poprawnosci sortowania dla typow long int,
 * float oraz double.
 */

#include <vector>

#include <gtest/gtest.h>

#include "MergeSort.h"

/**
 * @brief Sprawdza czy algorytm poprawnie sortuje liczby typu long int.
 */
TEST(MergeSortTypeTests, SortsLongIntNumbers) {
    std::vector<long int> numbers = {900000, -300000, 500000, 100000};

    MergeSort<long int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<long int>{-300000, 100000, 500000, 900000}));
}

/**
 * @brief Sprawdza czy algorytm poprawnie sortuje liczby typu float.
 */
TEST(MergeSortTypeTests, SortsFloatNumbers) {
    std::vector<float> numbers = {4.5f, 1.2f, 8.7f, 2.3f};

    MergeSort<float>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<float>{1.2f, 2.3f, 4.5f, 8.7f}));
}

/**
 * @brief Sprawdza czy algorytm poprawnie sortuje liczby typu double.
 */
TEST(MergeSortTypeTests, SortsDoubleNumbers) {
    std::vector<double> numbers = {9.75, 2.25, 5.5, 1.5};

    MergeSort<double>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<double>{1.5, 2.25, 5.5, 9.75}));
}
