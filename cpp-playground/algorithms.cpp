#include <iostream>
#include "algorithms.hpp"

void foo(){
    std::cout << "baz" << std::endl;
}


void binarySort() {
    // Pseudocode
    //  Goal
    // I want to find the index of a target value in an array

    //  Inputs
    // get the array
    //  e.g [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    // get the target value
    //  e.g 3
    
    //  Method
    // initial start && end, 0 && array.length - 1
    
    // Loop: -
    // midpoint = (start + end) / 2
    // If array[midpoint] == target, return midpoint (as the found index)

    // If array[midpoint] is LESS (<) than target, search top half from midpoint + 1 to end
    //  i.e start == midpoint + 1
    // If array[midpoint] val is MORE (>) than target, search the bottom half from start to midpoint - 1
    //  i.e == end == midpoint - 1
}
