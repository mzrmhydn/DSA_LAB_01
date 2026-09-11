// Task 4: Read 8 integers, then find the largest and smallest values
// along with their indices. Duplicates report the FIRST occurrence.

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 8;
    int numbers[SIZE];

    cout << "Enter 8 integers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    // Start by assuming element 0 is both the largest and the smallest.
    int maxValue = numbers[0], maxIndex = 0;
    int minValue = numbers[0], minIndex = 0;

    for (int i = 1; i < SIZE; i++) {
        // Strict > and < are the key: an equal value does NOT replace the
        // one already stored, so the first occurrence is kept.
        if (numbers[i] > maxValue) {
            maxValue = numbers[i];
            maxIndex = i;
        }
        if (numbers[i] < minValue) {
            minValue = numbers[i];
            minIndex = i;
        }
    }

    cout << "Largest value: " << maxValue << " at index " << maxIndex << "\n";
    cout << "Smallest value: " << minValue << " at index " << minIndex << "\n";

    return 0;
}
