// Task 2: Read five integers into an array with one loop,
// add them to a total with a second loop, and display the total.

#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int total = 0;

    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < 5; i++) {
        total = total + numbers[i];
        // Trace line for the test table (remove if you want clean output):
        cout << "i = " << i
             << ", numbers[i] = " << numbers[i]
             << ", total = " << total << "\n";
    }

    cout << "Total = " << total << "\n";

    return 0;
}
