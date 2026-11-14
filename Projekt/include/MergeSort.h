
#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <cstddef>
#include <type_traits>
#include <vector>

template <typename T>
class MergeSort {
    static_assert(std::is_arithmetic<T>::value,
        "MergeSort requires an arithmetic type.");

public:
    static bool isSorted(const std::vector<T>& values);
    static void sort(std::vector<T>& values);

private:
    static void mergeSort(std::vector<T>& values, std::size_t left, std::size_t right);
    static void merge(std::vector<T>& values, std::size_t left,
        std::size_t middle, std::size_t right);
};

template <typename T>
bool MergeSort<T>::isSorted(const std::vector<T>& values) {
    for (std::size_t index = 1; index < values.size(); ++index) {
        if (values[index - 1] > values[index]) {
            return false;
        }
    }

    return true;
}

template <typename T>
void MergeSort<T>::sort(std::vector<T>& values) {
    if (values.size() < 2) {
        return;
    }

    mergeSort(values, 0, values.size() - 1);
}

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
