#include "arrays.hpp"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


// array declaration
const int SIZE = 9;
string planets[SIZE] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};

int days[6] = {1 , 2, 3, 4}; // partial init means the rest of the values will have val 0 or ""
int months[] = {10, 11, 12}; // implicit sizing



void readFile() {
    // read data from file into array
    ofstream outputFile;
    const int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE];
    int count {0};
    
    ifstream inputFile;
    inputFile.open("/Users/merlinjones/code/cpp/cpp-playground/array.txt");
    
    while (count < ARRAY_SIZE && inputFile >> numbers[count])
        count++;
    
    inputFile.close();
    
    cout << "The numbers are: ";
    for (count = 0; count < ARRAY_SIZE; count ++)
        cout << numbers[count] << " ";
    cout << endl;
}

int exampleWrite() {
    fstream strm;
    strm.open("/Users/merlinjones/code/cpp/cpp-playground/file1.txt", ios_base::out);
    if (!strm.is_open()) {
        cout << "File could not be opened!" << endl;
        return 1;
    }

    char str[] = "A: This is the chippy line.\n"
                 "B: This is the burger line.\n"
                 "C: This is the beer line.\n";

    strm << str;
    strm.close();
    if (strm.is_open()){
        cout << "Stream could not close!" << endl;
        return 1;
    }
    cout << "Success, check file" << endl;
    return 0;
}



int exampleRead()
{
    fstream strm;
    strm.open("/Users/merlinjones/code/cpp/cpp-playground/file1.txt", ios_base::in);
    if (!strm.is_open()) {
        cout << "Open file failed" << endl;
        return 1;
    }
    char c;

    while (!strm.eof()) {
        strm.get(c);
        cout << c;
    }

    strm.close();

    return 0;
}

//int main()
//{
//    cout << planets[0] << std::endl;
//    writeToFile();
//    exampleWrite();
//    exampleRead();
//    readFile();
//    return 0;
//}
