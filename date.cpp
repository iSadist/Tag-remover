#include <regex>
#include <iostream>
#include "date.h"

using namespace std;

Date::Date(std::string string) : date(string) {
}

istream& operator>>(istream& is, Date& d) {

  regex date_format("^\\d{4}\\-\\d{2}\\-\\d{2}$");
  if (regex_match(d.date, date_format)) {
    std::cout << "/* message */" << '\n';
  }

  is >> d.date;
  // if (regex_match(d.date, date_format)) {
  //   is >> d.date;
  // } else {
  //   is.setstate(ios_base::failbit);
  // }
}

ostream& operator<<(ostream& os, Date& d) {
  os << d.date;
}
