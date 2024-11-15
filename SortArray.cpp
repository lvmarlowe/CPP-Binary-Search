/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 2: Assignment
    7 Sept 2024
    This source file implements the methods of the SortArray class, including
    the constructor, destructor, and the method to sort the vector of doubles.
    It requires SortArray.h to run.
 -------------------------------------------------- */

#include "SortArray.h"
#include <algorithm> // For ::sort

using namespace std;

SortArray::SortArray() : array(nullptr) {}

// Virtual destructor
SortArray::~SortArray() {}

SortArray::SortArray(vector<double>* arr) : array(arr) {}

// Method to sort array
void SortArray::sort() {

    // Ensure array exists and is not empty
    if (array && !array->empty()) {
        ::sort(array->begin(), array->end());
    }
}
