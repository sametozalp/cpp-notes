#include <iostream>

using namespace std;

struct Student {
	int number;
	string name;
	string surname;
};

void changeName(Student& student, string newName) { // if you use ampersant, the name value of student don't change 
	student.name = newName;
}

int main() {

	Student std1 = { 0, "samet", "ozalp" };
	cout << std1.name << endl; // samet

	changeName(std1, "ahmet");
	cout << std1.name << endl; // ahmet


	return 0;
}