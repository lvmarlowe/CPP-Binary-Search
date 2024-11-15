/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 2: Assignment
    7 Sept 2024
    This source file implements the methods of the CreateArray class, including
    the default constructor, destructor, and the method to get the array of doubles.
    It requires CreateArray.h to run.
 -------------------------------------------------- */

#include "CreateArray.h"

// Constructor with starting array
CreateArray::CreateArray() : array{ 4.5, 6, 1, 9.2, 4, 77, 1200, 16.4 } {}

// Virtual destructor
CreateArray::~CreateArray() {}

// Method to create array
const vector<double>& CreateArray::getArray() const {
    return array;
}
