#include <iostream>
#include <vector>
#include "codewars.hpp"
#include "algorithms.hpp"
#include "first-program.hpp"




std::vector<int> countBy(int x,int n);

int getValueFromUser()
{
     std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    energyTracker();
    std::cout << '\n' <<"finished" << '\n';
    return 0;
}

