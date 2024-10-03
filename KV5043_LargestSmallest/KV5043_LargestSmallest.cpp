#include <iostream>

int main() {
    // Initialise an array with 10 numbers
    int numbers[10] = { 25, 67, 12, 89, 34, 2, 56, 77, 43, 9 };

    // Implementing a simple bubble sort to sort the array in descending order
    int n = 10;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numbers[j] < numbers[j + 1]) {
                // Swap if the current element is smaller than the next element
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Output the sorted array
    std::cout << "Array sorted from largest to smallest:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
