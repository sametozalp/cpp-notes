#include "Main.h"
#include <iostream>

using namespace std;

template<class MyClassType>

MyClassType add(MyClassType a, MyClassType b) {
	return a + b;
}

int main() {

	int result = add<double>(5, 6);

	cout << result;

	return 0;
}