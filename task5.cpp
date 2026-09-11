// Task 5: Read 6 integers and reverse them in place (no second array).

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 6;
    int numbers[SIZE];

    cout << "Enter 6 integers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    // Walk two markers towards each other and swap the pair they point at.
    // Only a single temp variable is used, never a second array.
    int left = 0;
    int right = SIZE - 1;

    while (left < right) {
        int temp = numbers[left];
        numbers[left] = numbers[right];
        numbers[right] = temp;

        left++;
        right--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";

    return 0;
}
