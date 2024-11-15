/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 2: Assignment
    7 Sept 2024
    This header file defines the CreateArray class, which is responsible for
    managing a vector of doubles. It includes a default constructor, a virtual
    destructor, and a protected method to get the array of doubles.
-------------------------------------------------- */

#ifndef CREATEARRAY_H
#define CREATEARRAY_H

#include <vector>

using namespace std;

class ProgramManager; // Forward declaration

class CreateArray {
    friend class ProgramManager; // Allows ProgramManager to access

public:
    CreateArray(); // Default constructor
    virtual ~CreateArray(); // Virtual Destructor

protected:
    const vector<double>& getArray() const; // Getter

private:
    vector<double> array;
};

#endif // CREATEARRAY_H
