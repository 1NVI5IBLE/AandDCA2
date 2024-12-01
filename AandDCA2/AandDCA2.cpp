#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype>
#include "BSTNode.h"
#include "BinaryTree.h"
#include "Treemap.h"
#include "string"

using namespace std;

int main(void) {

    string filename = "C:/Users/liamt/Desktop/words.txt";

    ifstream inFile(filename);


    if (inFile.fail()) {
        cout << "Error opening file: " << filename << endl;
        return 1;
    }
    
    Treemap<char, BinaryTree<string>> wordMap;

    string line;
    while (getline(inFile, line)) {
        stringstream ss(line);
        string word;
}