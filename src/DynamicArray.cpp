
#include "DynamicArray.h"
#include <iostream>
#include <stdexcept>

using namespace std;

DynamicArray::DynamicArray(int n) {
    if (n < 0) {
        throw invalid_argument("Invalid array size");
    }

    size = n;
    data = new int[size]{};
}

DynamicArray::DynamicArray(const DynamicArray& other) {
    size = other.size;
    data = new int[size];

    for (int i = 0; i < size; i++) {
        data[i] = other.data[i];
    }
}

DynamicArray& DynamicArray::operator=(const DynamicArray& other) {
    if (this == &other) {
        return *this;
    }

    int* newData = new int[other.size];

    for (int i = 0; i < other.size; i++) {
        newData[i] = other.data[i];
    }

    delete[] data;

    data = newData;
    size = other.size;

    return *this;
}

DynamicArray::~DynamicArray() {
    delete[] data;
}

void DynamicArray::print() const {
    cout << "[ ";

    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }

    cout << "]" << endl;
}

bool DynamicArray::set(int index, int value) {
    if (index < 0 || index >= size) {
        return false;
    }

    if (value < -100 || value > 100) {
        return false;
    }

    data[index] = value;
    return true;
}

int DynamicArray::get(int index) const {
    if (index < 0 || index >= size) {
        throw out_of_range("Index out of range");
    }

    return data[index];
}

void DynamicArray::pushBack(int value) {
    if (value < -100 || value > 100) {
        throw out_of_range("Value must be from -100 to 100");
    }

    int* newData = new int[size + 1];

    for (int i = 0; i < size; i++) {
        newData[i] = data[i];
    }

    newData[size] = value;

    delete[] data;

    data = newData;
    size++;
}

void DynamicArray::add(const DynamicArray& other) {
    for (int i = 0; i < size; i++) {
        if (i < other.size) {
            data[i] += other.data[i];
        }
    }
}

void DynamicArray::subtract(const DynamicArray& other) {
    for (int i = 0; i < size; i++) {
        if (i < other.size) {
            data[i] -= other.data[i];
        }
    }
}
