// Task 5: Read 6 integers and reverse them in place,
// without using another array and without loops in the reversal logic.

#include <iostream>
using namespace std;

// Swap the outer pair, then hand the smaller inner problem to itself.
// Base case: the markers have met or crossed, so nothing is left to swap.
void reverseArray(int arr[], int left, int right) {
    if (left >= right) {
        return;
    }

    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;

    reverseArray(arr, left + 1, right - 1);
}

// Recursive printing, to keep the whole task loop-free.
void printArray(int arr[], int i, int n) {
    if (i >= n) {
        cout << "\n";
        return;
    }
    cout << arr[i] << " ";
    printArray(arr, i + 1, n);
}

// Recursive input as well.
void readArray(int arr[], int i, int n) {
    if (i >= n) {
        return;
    }
    cin >> arr[i];
    readArray(arr, i + 1, n);
}

int main() {
    const int SIZE = 6;
    int numbers[SIZE];

    cout << "Enter 6 integers: ";
    readArray(numbers, 0, SIZE);

    reverseArray(numbers, 0, SIZE - 1);

    cout << "Reversed array: ";
    printArray(numbers, 0, SIZE);

    return 0;
}
