#include <iostream>

int main() {
    // Initialise an array with 10 numbers
    int numbers[10] = { 25, 67, 12, 89, 34, 2, 56, 77, 43, 9 };

    // Initialise variables to store the largest and smallest numbers
    int largest = numbers[0];  // Start by assuming the first element is the largest
    int smallest = numbers[0];   // Start by assuming the first element is the smallest

    // Loop through the array to find the largest and smallest numbers
    for (int number: numbers) {
        if (number > largest) {
            largest = number;  // Update largest if the current element is larger
        }
        if (number < smallest) {
            smallest = number;   // Update smallest if the current element is smaller
        }
    }

    // Output the results
    std::cout << "Largest number: " << largest << std::endl;
    std::cout << "Smallest number: " << smallest << std::endl;

    return 0;
}
