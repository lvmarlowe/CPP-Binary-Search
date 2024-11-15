/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 2: Assignment
    7 Sept 2024
    This source file implements the methods of the ProgramManager class, including
    the constructor, destructor, and methods to perform operations on the array,
    such as sorting and searching. It requires ProgramManager.h to run.
-------------------------------------------------- */

#include "ProgramManager.h"
#include <iostream>

using namespace std;

ProgramManager::ProgramManager()
    : createArray(new CreateArray()),
    array(new vector<double>(createArray->getArray())),
    sorter(new SortArray(array)),
    searcher(new SearchArray(array))
{}

// Virtual destructor
ProgramManager::~ProgramManager() {
    delete createArray;
    delete array;
    delete sorter;
    delete searcher;
}

// Method to sort and search array and display result to user
void ProgramManager::performOperations() {

    sorter->sort();
    double target = 9.2; // Target value
    int index = searcher->search(target);

    // Display sorted array
    cout << "****************************" << endl;
    cout << "I searched for " << target << " in this sorted array:" << endl;
    cout << "[";
    for (size_t i = 0; i < array->size(); ++i) {
        cout << (*array)[i];
        if (i < array->size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    cout << "****************************" << endl;

    // Display results of search
    if (index != -1) {
        cout << "Success: I found " << target
            << " at index " << index << "." << endl;
    }
    else {
        cout << "Failure: I did not find " << target
            << " in the array." << endl;
    }
    cout << "****************************" << endl;
}

// Method to run the program, which is accessible by Main
void ProgramManager::run() {
    performOperations();
}
