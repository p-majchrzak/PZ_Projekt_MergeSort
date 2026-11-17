#include <vector>
#include <gtest/gtest.h>

#include "MergeSort.h"

// Sprawdza czy tablica posortowana rosnąco
TEST(MergeSortTests, KeepsAlreadySortedArrayUnchanged) {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    MergeSort<int>::sort(numbers);

    EXPECT_EQ(numbers, (std::vector<int>{1, 2, 3, 4, 5}));
}
