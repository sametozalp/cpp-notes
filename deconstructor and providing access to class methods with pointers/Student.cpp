#include <iostream>

using namespace std;

class Student {

private:
	string name;


public:
	string getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}

	// DECONSTRUCTOR
	~Student() {
		cout << "DELETED OBJECT" << endl;
	}

};