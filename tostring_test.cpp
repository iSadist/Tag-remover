#include <iostream>
#include <sstream>
#include <stdexcept>

using namespace std;

template <typename T>
string toString(T& obj){
	ostringstream converter;
	converter << obj;
	return converter.str();
}

template <typename T>
T string_cast(const string& in_str){
	istringstream converter;
	T ret_val;
	converter.str(in_str);
	if (converter >> ret_val){
		return ret_val;
	}
	throw std::invalid_argument("Invalid argument");
}



int main() {
	int a = 44;
	cout << toString(a) << endl;

	double b = 1337.7331;
	cout << toString(b) << endl;

	double c = string_cast<double>("14.04");
	cout << toString(c) << endl;

	double d = string_cast<double>("wrongstring");
	cout << toString(d) << endl;

	return 0;
}
