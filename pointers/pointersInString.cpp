/*
#include <iostream>
#include <string>

using namespace std;

int main() {

	//------------ C -------------

	char name[10] = "Kaan";

	char* nameAdress = name;		// K
	char* nameAdress2 = &name[0];	// K


	//------------ C++ -------------

	string name2 = "Kaan";
	string* name2Adress = &name2;

	cout << name2Adress << endl; // adress
	cout << *name2Adress << endl; // Kaan 
}*/