#include <iostream>
#include "Student.cpp"

using namespace std;

int main() {

	Student* student = new Student();
	student->setName("samet");

	cout << student->getName() << endl;

	delete student; // WROTE "DELETED OBJECT"
	
}