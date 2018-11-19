//
// Justin Grabowski
// CS355
// Fall 2018
// November 10th 2018
// Instructor Ganchev G.
// main.cpp
// CS355Ass1_Problem6
// Language C++
//
// Purpose: This file tests arguement evaluation
// order in C++

#include <iostream>

int printFunction1();
int printFunction2();

void testFunctions(int val1, int val2);

int main(int argc, const char * argv[]) {
    
    // Check to see what order the paramters are evaluated
    testFunctions(printFunction1(), printFunction2());
    
    return 0;
}

// Funciton that prints a message when called
int printFunction1()
{
    std::cout << "PrintFunction1 called\n";
    return 1;
}

// Funciton that prints a message when called
int printFunction2()
{
    std::cout << "PrintFunction2 called\n";
    return 2;
}

void testFunctions(int func1, int func2){}
