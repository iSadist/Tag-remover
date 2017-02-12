#include "date.h"
#include <iostream>

using namespace std;

int main() {
	Date birthday("1992-01-26");
	Date millenium("2000-01-01");
	cout << birthday << millenium << endl;

	Date today("2017-02-11");

	while(cin >> today) {
		std::cout << today;
	}
	cout << "\nProgram terminated (EOF reached or invalid date format input)" << endl;
	return 0;
}
