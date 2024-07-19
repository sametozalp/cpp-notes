#include <iostream>
using namespace std;

int main() {
	int* q = new int;

	*q = 5;
	cout << *q;

	delete q; // delete value
	q = nullptr; // release address // q = 0

}