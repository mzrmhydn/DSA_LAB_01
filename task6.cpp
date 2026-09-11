// Task 6: Read 10 integers. Move the first occurrence of each distinct value
// to the front of the SAME array, keeping the original order. No second array.

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int numbers[SIZE];

    cout << "Enter 10 integers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    // count = how many distinct values have been placed at the front so far.
    // Positions 0 .. count-1 always hold the unique values found up to now.
    int count = 0;

    for (int i = 0; i < SIZE; i++) {
        bool alreadySeen = false;

        // Look for numbers[i] among the uniques already stored at the front.
        for (int j = 0; j < count; j++) {
            if (numbers[j] == numbers[i]) {
                alreadySeen = true;
                break;
            }
        }

        if (!alreadySeen) {
            numbers[count] = numbers[i];   // safe: count <= i always
            count++;
        }
    }

    cout << "Unique values: ";
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";
    cout << "Count = " << count << "\n";

    // The array still has 10 slots physically; only the first `count`
    // positions hold the result. The leftover slots are ignored.

    return 0;
}
