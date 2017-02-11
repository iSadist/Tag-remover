
#include "primes.h"

#include <iostream>

using namespace std;

Primes::Primes(int length) : length(length) {
  string p(length, 'P');
  p[0] = 'C';
  p[1] = 'C';
  primes = p;
}

void Primes::find(int number) {
  for (size_t i = number*2; i < primes.length(); i+=number) {
    primes[i] = 'C';
  }
}

void Primes::findInterval(int start, int stop) {
  while (start < stop) {
    find(start);
    start++;
  }
}

void Primes::print() {
  std::cout << primes << '\n';

  for (size_t i = 0; i < primes.length(); i++) {
    if(primes[i] == 'P') {
      std::cout << i << ' ';
    }
  }

  std::cout << std::endl;

}

void Primes::printHighest() {
  for (size_t i = primes.length() - 1; i > 0 ; i--) {
    if(primes[i] == 'P') {
      std::cout << i << endl;
      return;
    }
  }
}
