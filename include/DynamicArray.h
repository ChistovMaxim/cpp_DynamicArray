
#pragma once

class DynamicArray {
private:
    int* data;
    int size;

public:
    DynamicArray(int n);
    DynamicArray(const DynamicArray& other);
    DynamicArray& operator=(const DynamicArray& other);
    ~DynamicArray();

    void print() const;

    bool set(int index, int value);
    int get(int index) const;

    void pushBack(int value);

    void add(const DynamicArray& other);
    void subtract(const DynamicArray& other);
};
