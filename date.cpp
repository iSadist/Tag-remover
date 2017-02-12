#include <regex>
#include <iostream>
#include "date.h"

using namespace std;

Date::Date(std::string string) : date(string) {}
Date::Date() {}

istream& operator>>(istream& is, Date& d) {
	regex date_format("^\\d{4}\\-\\d{2}\\-\\d{2}$");
	string input;
	is >> input;
	if (regex_match(input, date_format)) {
		std::cout << "Valid input" << '\n';
		d.date = input;
		return is;
	}
	is.setstate(ios_base::failbit);
	return is;
}

ostream& operator<<(ostream& os, Date& d) {
	regex date_format("^\\d{4}\\-\\d{2}\\-\\d{2}$");

	if (regex_match(d.date, date_format)) {
		std::cout << "Valid output" << '\n';
		os << d.date;
		return os;
	}
	os.setstate(ios_base::failbit);
	return os;
}
