#include <iostream>
#include <fstream>
#include "BSTNode.h"
#include "BinaryTree.h"
#include "string"

using namespace std;

int main(void) {

    string filename = "C:/Users/liamt/Desktop/words.txt";

    ifstream inFile(filename);


    if (inFile.fail()) {
        cout << "Error opening file: " << filename << endl;
        return 1;
    }


    char c;
    while (inFile.get(c)) {
        cout << c;
    }


    inFile.close();

    return 0;
}