
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

#endif
