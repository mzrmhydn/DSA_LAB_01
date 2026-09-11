// Task 1: Declare an array, update the third element, display all values.
// Predicted output: 2 4 7 8 10

#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {2, 4, 6, 8, 10};

    // The "third element" is at index 2, because C++ indices start at 0.
    numbers[2] = 7;

    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";

    return 0;
}
