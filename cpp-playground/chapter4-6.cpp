#include <iostream>
#include "chapter4-6.hpp"

#define MAX_STUDENTS_PER_CLASS 30




const double kEathGravity {9.8};

int staticCast(double number) {
    // To perform an explicit type conversion, in most cases we’ll use the static_cast operator.
    // static_cast<new_type>(expression)

    int converted { static_cast<int>(number)}; // EXPLICIT conversion to int
    
    std::cout << converted << '\n';
    
    char ch{ 97 }; // 97 is ASCII code for 'a'
    std::cout << ch << " has value " << static_cast<int>(ch) << '\n'; // print ascii val
    return 0;
}


void symboliConst() {
// the preprocessor will replace MAX_STUDENTS_PER_CLASS with the literal value 30
    std::cout << "The class has " << MAX_STUDENTS_PER_CLASS << " students.\n";
    std::cout << kEathGravity << '\n';

}

void typeConversion() {
    staticCast(6.75);
    symboliConst();
}

// carry on at 4.17
