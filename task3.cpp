// Task 3: A Student class with two public data members and a display()
// member function, plus the "does s2 change?" experiment.

#include <iostream>
using namespace std;

class Student {
public:
    int rollNumber;
    int marks;

    void display() {
        cout << "Roll Number: " << rollNumber << "\n";
        cout << "Marks: " << marks << "\n";
    }
};   // a class definition ends with a semicolon

int main() {
    Student s1;
    Student s2;

    s1.rollNumber = 1;
    s1.marks = 75;

    s2.rollNumber = 2;
    s2.marks = 90;

    cout << "--- Before the change ---\n";
    s1.display();
    s2.display();

    // Change only s1's marks.
    s1.marks = 80;

    cout << "--- After changing only s1.marks ---\n";
    s1.display();
    s2.display();

    // Explanation: s1 and s2 are two separate objects. Each object gets its
    // own copy of rollNumber and marks, stored at its own memory location.
    // Assigning to s1.marks writes into s1's copy only, so s2.marks stays 90.

    return 0;
}
