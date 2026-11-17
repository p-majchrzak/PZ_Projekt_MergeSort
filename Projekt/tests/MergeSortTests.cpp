
/**
 * @file MergeSortTests.cpp
 * @brief Testy jednostkowe algorytmu Merge Sort z wykorzystaniem Google Test.
 *
 * Plik zawiera testy sprawdzajace poprawne sortowanie tablic
 * o roznych rozmiarach i zawierajacych rozne wartosci.
 */

#include <vector>

#include <gtest/gtest.h>

#include "MergeSort.h"

/**
 * @brief Sprawdza czy tablica posortowana rosnaco pozostaje bez zmian.
 */
TEST(MergeSortTests, KeepsAlreadySortedArrayUnchanged) {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<int>{1, 2, 3, 4, 5}));
}

/**
 * @brief Sprawdza czy tablica posortowana odwrotnie zostaje poprawnie uporzadkowana.
 */
TEST(MergeSortTests, SortsReverseSortedArray) {
    std::vector<int> numbers = {9, 7, 5, 3, 1};

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<int>{1, 3, 5, 7, 9}));
}

/**
 * @brief Sprawdza czy tablica z losowa kolejnoscia liczb zostaje poprawnie posortowana.
 */
TEST(MergeSortTests, SortsRandomArray) {
    std::vector<int> numbers = {8, 3, 6, 1, 9, 2, 5, 4};

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<int>{1, 2, 3, 4, 5, 6, 8, 9}));
}

/**
 * @brief Sprawdza sortowanie tablicy zawierajacej wylacznie liczby ujemne.
 */
TEST(MergeSortTests, SortsNegativeNumbers) {
    std::vector<int> numbers = {-3, -8, -1, -5, -2};

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<int>{-8, -5, -3, -2, -1}));
}

/**
 * @brief Sprawdza sortowanie tablicy zawierajacej liczby ujemne i dodatnie.
 */
TEST(MergeSortTests, SortsNegativeAndPositiveNumbers) {
    std::vector<int> numbers = {5, -3, 8, -1, 0, 2};

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<int>{-3, -1, 0, 2, 5, 8}));
}

/**
 * @brief Sprawdza czy sortowanie pustej tablicy nie powoduje bledu.
 */
TEST(MergeSortTests, HandlesEmptyArray) {
    std::vector<int> numbers;

    MergeSort<int>::sort(numbers);

    EXPECT_TRUE(numbers.empty());
}

/**
 * @brief Sprawdza czy tablica zawierajaca jeden element pozostaje bez zmian.
 */
TEST(MergeSortTests, HandlesSingleElementArray) {
    std::vector<int> numbers = {7};

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<int>{7}));
}

/**
 * @brief Sprawdza sortowanie tablicy zawierajacej powtarzajace sie wartosci.
 */
TEST(MergeSortTests, SortsArrayWithDuplicates) {
    std::vector<int> numbers = {4, 2, 4, 1, 2, 3};

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<int>{1, 2, 2, 3, 4, 4}));
}

/**
 * @brief Sprawdza sortowanie liczb ujemnych zawierajacych duplikaty.
 */
TEST(MergeSortTests, SortsNegativeNumbersWithDuplicates) {
    std::vector<int> numbers = {-3, -1, -3, -5, -1, -2};

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<int>{-5, -3, -3, -2, -1, -1}));
}

/**
 * @brief Sprawdza sortowanie liczb ujemnych, dodatnich i duplikatow.
 */
TEST(MergeSortTests, SortsMixedNumbersWithDuplicates) {
    std::vector<int> numbers = {3, -2, 3, -5, 0, -2, 5};

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<int>{-5, -2, -2, 0, 3, 3, 5}));
}

/**
 * @brief Sprawdza czy dwa elementy ulozone rosnaco pozostaja bez zmian.
 */
TEST(MergeSortTests, HandlesTwoSortedElements) {
    std::vector<int> numbers = {2, 5};

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<int>{2, 5}));
}

/**
 * @brief Sprawdza sortowanie tablicy zawierajacej ponad 100 elementow.
 */
TEST(MergeSortTests, SortsLargeArray) {
    std::vector<int> numbers;
    std::vector<int> expected;

    for (int i = 150; i > 0; --i) {
        numbers.push_back(i);
    }

    for (int i = 1; i <= 150; ++i) {
        expected.push_back(i);
    }

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, expected);
}

/**
 * @brief Sprawdza sortowanie duzej tablicy z liczbami ujemnymi,
 * dodatnimi oraz powtarzajacymi sie wartosciami.
 */
TEST(MergeSortTests, SortsLargeArrayWithDuplicatesAndNegativeNumbers) {
    std::vector<int> numbers;
    std::vector<int> expected;

    for (int i = 0; i < 150; ++i) {
        numbers.push_back((i % 21) - 10);
    }

    for (int i = -10; i <= 10; ++i) {
        for (int j = 0; j < 150; ++j) {
            if ((j % 21) - 10 == i) {
                expected.push_back(i);
            }
        }
    }

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, expected);
}
