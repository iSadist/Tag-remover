#include <iostream>
#include <sstream>
#include <stdexcept>
#include "date.h"

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

	Date today("2017-02-11");
	cout << toString(today) << endl;

	try {
		int i = string_cast<int>("123");
		cout << toString(i) << endl;

		double d = string_cast<double>("12.34");
		cout << toString(d) << endl;

		Date date = string_cast<Date>("2015-01-10");
		cout << toString(date) << endl;

		//double d should throw invalid argument exception
		double e = string_cast<double>("wrongstring");
		cout << toString(e) << endl;

	} catch (std::invalid_argument& e) {
		cout << "Error: " << e.what() << endl;
	}

	return 0;
}
