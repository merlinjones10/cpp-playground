#include <iostream>
#include <vector>
#include "codewars.hpp"
#include "algorithms.hpp"
#include "first-program.hpp"
#include "chapter4-6.hpp"



std::vector<int> countBy(int x,int n);

void print(int x) // print now takes an int parameter
{
    std::cout << x;
}


int getValueFromUser()
{
     std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
//    energyTracker();
//    print(5.5);
    typeConversion();
    std::cout << '\n' <<"fin" << '\n';
    return 0;
}

