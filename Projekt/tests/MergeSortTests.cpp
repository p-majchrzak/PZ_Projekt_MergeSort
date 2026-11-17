
#include <vector>

#include <gtest/gtest.h>

#include "MergeSort.h"

// Sprawdza czy tablica posortowana rosnąco pozostaje bez zmian.
TEST(MergeSortTests, KeepsAlreadySortedArrayUnchanged) {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<int>{1, 2, 3, 4, 5}));
}

// Sprawdza czy tablica posortowana odwrotnie zostaje poprawnie uporządkowana.
TEST(MergeSortTests, SortsReverseSortedArray) {
    std::vector<int> numbers = {9, 7, 5, 3, 1};

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<int>{1, 3, 5, 7, 9}));
}

// Sprawdza czy tablica z losową kolejnością liczb zostaje poprawnie posortowana.
TEST(MergeSortTests, SortsRandomArray) {
    std::vector<int> numbers = {8, 3, 6, 1, 9, 2, 5, 4};

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<int>{1, 2, 3, 4, 5, 6, 8, 9}));
}

// Sprawdza czy tablica zawierająca wyłącznie liczby ujemne zostaje poprawnie posortowana.
TEST(MergeSortTests, SortsNegativeNumbers) {
    std::vector<int> numbers = {-3, -8, -1, -5, -2};

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<int>{-8, -5, -3, -2, -1}));
}

// Sprawdza czy tablica zawierająca liczby ujemne i dodatnie zostaje poprawnie posortowana.
TEST(MergeSortTests, SortsNegativeAndPositiveNumbers) {
    std::vector<int> numbers = {5, -3, 8, -1, 0, 2};

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<int>{-3, -1, 0, 2, 5, 8}));
}

// Sprawdza czy sortowanie pustej tablicy nie powoduje błędu.
TEST(MergeSortTests, HandlesEmptyArray) {
    std::vector<int> numbers;

    MergeSort<int>::sort(numbers);

    EXPECT_TRUE(numbers.empty());
}

// Sprawdza czy tablica zawierająca jeden element pozostaje bez zmian.
TEST(MergeSortTests, HandlesSingleElementArray) {
    std::vector<int> numbers = {7};

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<int>{7}));
}

// Sprawdza czy tablica zawierająca duplikaty zostaje poprawnie posortowana.
TEST(MergeSortTests, SortsArrayWithDuplicates) {
    std::vector<int> numbers = {4, 2, 4, 1, 2, 3};

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<int>{1, 2, 2, 3, 4, 4}));
}

// Sprawdza czy tablica zawierająca liczby ujemne i duplikaty zostaje poprawnie posortowana.
TEST(MergeSortTests, SortsNegativeNumbersWithDuplicates) {
    std::vector<int> numbers = {-3, -1, -3, -5, -1, -2};

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<int>{-5, -3, -3, -2, -1, -1}));
}

// Sprawdza czy tablica zawierająca liczby ujemne, dodatnie i duplikaty zostaje poprawnie posortowana.
TEST(MergeSortTests, SortsMixedNumbersWithDuplicates) {
    std::vector<int> numbers = {3, -2, 3, -5, 0, -2, 5};

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<int>{-5, -2, -2, 0, 3, 3, 5}));
}

// Sprawdza czy tablica zawierająca dwa elementy w kolejności rosnącej pozostaje bez zmian.
TEST(MergeSortTests, HandlesTwoSortedElements) {
    std::vector<int> numbers = {2, 5};

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<int>{2, 5}));
}
