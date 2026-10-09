
#include <iostream>
#include <stdexcept>
#include "DynamicArray.h"

using namespace std;

int main() {
    // Task 1
    cout << "Task 1: Create array" << endl;

    DynamicArray arr(3);

    arr.set(0, 10);
    arr.set(1, 20);
    arr.set(2, 30);

    arr.print();

    cout << "Element [1]: " << arr.get(1) << endl;

    if (!arr.set(5, 50)) {
        cout << "Invalid index!" << endl;
    }

    if (!arr.set(0, 150)) {
        cout << "Invalid value!" << endl;
    }

    // Task 2
    cout << "\nTask 2: Copy constructor" << endl;

    DynamicArray copy(arr);

    copy.set(0, 99);

    cout << "Original: ";
    arr.print();

    cout << "Copy: ";
    copy.print();

    // Task 3
    cout << "\nTask 3: Push back" << endl;

    arr.pushBack(40);
    arr.pushBack(50);

    arr.print();

    // Task 4
    cout << "\nTask 4: Add and subtract" << endl;

    DynamicArray a(4);
    DynamicArray b(2);

    a.set(0, 10);
    a.set(1, 20);
    a.set(2, 30);
    a.set(3, 40);

    b.set(0, 5);
    b.set(1, 10);

    cout << "Array A: ";
    a.print();

    cout << "Array B: ";
    b.print();

    a.add(b);

    cout << "A + B: ";
    a.print();

    a.subtract(b);

    cout << "A - B: ";
    a.print();

    // Assignment operator check
    cout << "\nAssignment test" << endl;

    DynamicArray assigned(1);
    assigned = arr;

    assigned.print();

    return 0;
}
