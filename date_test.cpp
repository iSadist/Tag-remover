#include "date.h"
#include <iostream>

using namespace std;

int main() {
  Date birthday("1992-01-26");
  Date millenium("2000-01-01");

  cout << birthday << millenium << endl;

  Date date1("0000-00-00");
  Date date2("0000-00-00");
  Date date3("0000-00-00");
  cin >> date1 >> date2 >> date3;
  cout << date1 << '\n';

  Date today("");


  return 0;
}
