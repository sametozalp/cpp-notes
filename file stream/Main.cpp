#include <iostream>
#include <fstream>

using namespace std;

int main() {

	
	// write data

	ofstream file("students.txt", ios_base::app); // not delete data

	file << "Information of students\n";
	file << "Samet: ";
	file << "202113171084";
	
	//*********************************************

	// read data

	ifstream file("students.txt");

	string row;
	while (file >> row) {
		cout << row << endl;
	}

	return 0;
}