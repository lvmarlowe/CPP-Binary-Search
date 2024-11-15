/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 2: Assignment
    7 Sept 2024
    This header file defines the SearchArray class, which performs binary search
    operations on a vector of doubles. It includes a constructor, destructor, and
    methods to search for a target value and set the array.
-------------------------------------------------- */

#ifndef SEARCHARRAY_H
#define SEARCHARRAY_H

#include <vector>

using namespace std;

class ProgramManager; // Forward declaration

class SearchArray {
    friend class ProgramManager; // Allows ProgramManager to access

public:
    SearchArray(); // Default Constructor
    virtual ~SearchArray(); // Virtual Destructor
    int search(double target) const; // Search function

    // Explicit avoids exception from implicit conversion
    // https://www.geeksforgeeks.org/how-to-prevent-implicit-conversions-in-cpp/
    explicit SearchArray(const vector<double>* arr);

protected:
    const vector<double>* array; // Pointer to the array

private:
    void setArray(const vector<double>* arr);
};

#endif // SEARCHARRAY_H
