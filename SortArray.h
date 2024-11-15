#ifndef SORTARRAY_H
#define SORTARRAY_H

/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 2: Assignment
    7 Sept 2024
    This header file defines the SortArray class, which sorts a vector of doubles
    using the standard sort algorithm. It includes a constructor, destructor, and
    a method to perform sorting.
-------------------------------------------------- */

#include <vector>

using namespace std;

class ProgramManager; // Forward declaration

class SortArray {
    friend class ProgramManager; // Allows ProgramManager to access

public:
    SortArray(); // Default constructor
    virtual ~SortArray(); // Virtual destructor

    // Explicit avoids exception from implicit conversion
    // https://www.geeksforgeeks.org/how-to-prevent-implicit-conversions-in-cpp/
    explicit SortArray(vector<double>* arr);

protected:
    void sort();

private:
    vector<double>* array; // Pointer to the array
};

#endif // SORTARRAY_H
