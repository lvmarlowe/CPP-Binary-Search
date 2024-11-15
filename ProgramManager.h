/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 2: Assignment
    7 Sept 2024
    This header file defines the ProgramManager class, which manages the
    creation, sorting, and searching of an array. It includes friend declarations
    for the CreateArray, SortArray, and SearchArray classes, as well as methods
    to perform operations on the array. I requires CreateArray.h, SortArray.h,
    and SearchArray.h to run.
-------------------------------------------------- */

#ifndef PROGRAMMANAGER_H
#define PROGRAMMANAGER_H

#include "CreateArray.h"
#include "SortArray.h"
#include "SearchArray.h"

using namespace std;

// Forward declarations
class CreateArray;
class SearchArray;
class SortArray;

class ProgramManager {

    // Allows other classes to access
    friend class CreateArray;
    friend class SortArray;
    friend class SearchArray;

public:
    ProgramManager(); // Default constructor
    virtual ~ProgramManager(); // Virtual destructor
    void run();

private:
    CreateArray* createArray;
    vector<double>* array; // Pointer to the array
    SortArray* sorter;
    SearchArray* searcher;
    void performOperations();
};

#endif // PROGRAMMANAGER_H
