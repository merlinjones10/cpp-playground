#include <vector>
#include <iostream>
using namespace std;
void print(string);

/*
 Create a function with two arguments that will return an array of the first n multiples of x.
 Assume both the given number and the number of times to count will be positive numbers greater than 0.
 Return the results as an array or list ( depending on language ).

 Examples
 countBy(1,10)  should return  {1,2,3,4,5,6,7,8,9,10}
 countBy(2,5)  should return {2,4,6,8,10}
 */


vector<int> countBy(int x,int n){
    vector<int> myVec;
    for (int count = 1; count < n + 1; count++) {
        myVec.push_back(count * x);
    }
    
    std::ostream_iterator<int> out_it (std::cout,", ");
    std::copy ( myVec.begin(), myVec.end(), out_it );
    return myVec;
}



//Write a function that will take the number of petals of each flower and return true if they are in love and false if they aren't.
bool isEven(int number) {
    return number % 2 == 0;
}

bool loveFunc(int f1, int f2) {
    bool p1 {isEven(f1)};
    bool p2 {isEven(f2)};
    bool inLove = p1 != p2;
    return inLove;
    
}

