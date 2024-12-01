#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream inFile("C:/Users/liamt/Downloads/data.csv");

	if (!inFile.is_open()) std::cout << "Cant open file" << '\n';


	string carModel;
	string make;
	string year;
	string vim;
	string location;

	while (inFile.good()) {
		
	}
}