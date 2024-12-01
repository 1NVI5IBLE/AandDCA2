/*

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int open()
{
	ifstream inFile("C:/Users/liamt/Downloads/data.csv");

	if (!inFile.is_open()) {
		cout << "Cant open file" << '\n';
		return -1;
	}



	string carModel;
	string make;
	string year;
	string vim;
	string location;

	string header;
	getline(inFile, header);

	while (getline(inFile, carModel, ',') &&
	getline(inFile, make, ',') &&
	getline(inFile, year, ',') &&
	getline(inFile, vim, ',') &&
	getline(inFile, location, '\n')) {
		


		cout << "Model: " << carModel << '\n';
		cout << "Make: " << make << '\n';
		cout << "Year: " << year << '\n';
		cout << "Vim: " << vim << '\n';
		cout << "Dealer Location: " << location << '\n';

	}
	inFile.close();
	return 0;
}

int main() {
	open();
	return 0;
}


*/
