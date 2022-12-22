#include <iostream>
#include <vector>
#include "codewars.hpp"


std::vector<int> countBy(int x,int n);

int getValueFromUser()
{
     std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

void printDouble(int value) // This function now has an integer parameter
{
    std::cout << value << " doubled is: " << value * 2 << '\n';
}

int main()
{
    std::cout << loveFunc(1, 2) << '\n';
    return 0;
}

