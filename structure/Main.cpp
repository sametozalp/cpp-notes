#include <iostream>

using namespace std;

struct Student {
	int number;
	string name;
	string surname;
};

int main() {

	Student std1 = { 0, "samet", "ozalp" };

	cout << std1.number << endl;
	cout << std1.name << endl;
	cout << std1.surname << endl;



	return 0;
}