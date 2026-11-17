
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
