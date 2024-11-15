/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 2: Assignment
    7 Sept 2024
    This source file implements the methods of the SearchArray class, including
    the constructor, destructor, and the method to perform binary search on the
    vector of doubles. It requires SearchArray.h to run.
-------------------------------------------------- */

#include "SearchArray.h"

SearchArray::SearchArray() : array(nullptr) {}

// Virtual destructor
SearchArray::~SearchArray() {}

SearchArray::SearchArray(const vector<double>* arr) : array(arr) {}

// Function to perform binary search on sorted array
int SearchArray::search(double target) const {

    int low = 0;

    // Static cast for explicit conversion
    // https://www.geeksforgeeks.org/static_cast-in-cpp/
    int high = static_cast<int>(array->size()) - 1;

    // Continue until low is less than or equal to high
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if target is present at mid
        if ((*array)[mid] == target) {
            return mid;
        }

        // If target is greater than mid, ignore left half
        if ((*array)[mid] < target) {
            low = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            high = mid - 1;
        }
    }

    // Return -1 if target value not present
    return -1;
}

// Method to set array
void SearchArray::setArray(const vector<double>* arr) {
    array = arr;
}
