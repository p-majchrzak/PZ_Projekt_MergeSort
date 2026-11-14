
#include <iostream>
#include <vector>

#include "MergeSort.h"

int main() {
    std::vector<int> numbers = {8, 3, 6, 1, 9, 2, 5, 4};
    std::vector<double> decimalNumbers = {4.5, 2.1, 8.7, 1.3, 6.9};

    MergeSort<int>::sort(numbers);
    MergeSort<double>::sort(decimalNumbers);

    std::cout << "Sorted integer array: ";

    for (const int number : numbers) {
        std::cout << number << " ";
    }

    std::cout << "\nInteger array status: "
        << (MergeSort<int>::isSorted(numbers) ? "Correct" : "Incorrect");

    std::cout << "\n\nSorted double array: ";

    for (const double number : decimalNumbers) {
        std::cout << number << " ";
    }

    std::cout << "\nDouble array status: "
        << (MergeSort<double>::isSorted(decimalNumbers) ? "Correct" : "Incorrect");

    std::cout << '\n';

    return 0;
}
