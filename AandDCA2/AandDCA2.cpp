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

        while (ss >> word) {
            if (!word.empty() && isalpha(word[0])) {
                char thefirstletter = tolower(word[0]);

                if (!wordMap.containsKey(thefirstletter)) {
                    BinaryTree<string> tree;
                    wordMap.put(thefirstletter, tree);
                }
                wordMap[thefirstletter].add(word);
            }
        }
    }

    inFile.close();

    cout << "Letters that contain words: " << endl;
    BinaryTree<char> lettersTree = wordMap.keySet();
    lettersTree.printInOrder();

    char selectedletter;
    cout << "\n Enter a letter and see what words start with the letter selected:  ";
    cin >> selectedletter;
    selectedletter = tolower(selectedletter);

    if (wordMap.containsKey(selectedletter)) {
        cout << "Words that start with " << selectedletter << " : " << endl;
        BinaryTree<string>& wordsTree = wordMap[selectedletter];
        wordsTree.printInOrder();
    }
    else
    {
        cout << "No words have been found with the letter you selected " << selectedletter << endl;
    }

    return 0;
}