#include "date.h"

using namespace std;

Date::Date(std::string d) : date(d) {}

istream& operator>>(istream& is, Date& d) {
  is >> d.date;
}

ostream& operator<<(ostream& os, Date& d) {
  os << d.date;
}
