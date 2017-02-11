#ifndef DATE_H
#define DATE_H

#include <string>
#include <iostream>

using namespace std;

class Date {
public:
  Date(std::string string);
  friend istream& operator>>(istream& is, Date& d);
  friend ostream& operator<<(ostream& os, Date& d);
private:
  std::string date;
};

#endif
