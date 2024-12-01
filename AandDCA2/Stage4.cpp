/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int open()
{
	ifstream inFile("C:/Users/liamt/Downloads/data.csv");

	if (!inFile.is_open()) std::cout << "Cant open file" << '\n';


	string carModel;
	string make;
	string year;
	string vim;
	string location;

	while (inFile.getline()) {
		getline(inFile, carModel, ',');
		getline(inFile, make, ',');
		getline(inFile, year, ',');
		getline(inFile, vim, ',');
		getline(inFile, location, '\n');


		std::cout << "Model: " << carModel << '\n';
		std::cout << "Make: " << make << '\n';
		std::cout << "Year: " << year << '\n';
		std::cout << "Vim: " << vim << '\n';
		std::cout << "Dealer Location: " << location << '\n';

	}
	inFile.close();
	return 0;
}

int main() {
	open();
	return 0;
}
*/