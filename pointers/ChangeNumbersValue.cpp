/*
#include <iostream>

void changeValue(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
-----++++++++++
////*****OR*****\\\\\\\
void changeValue(int &x, int &y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main() {


	int a, b;

	a = 5; b = 8;

	std::cout << a << " " << b << std::endl;

	changeValue(&a, &b);

	std::cout << a << " " << b << std::endl;


	return 0;
}
*/