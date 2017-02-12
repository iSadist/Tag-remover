#include <iostream>
#include <sstream>

using namespace std;

template <typename T>
string toString(T& obj){
	ostringstream converter;
	converter << obj;
	return converter.str();
}

int main() {
	int a = 44;
	cout << toString(a) << endl;

	double b = 1337.7331;
	cout << toString(b) << endl;

	return 0;
}
