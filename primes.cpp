
#include "primes.h"

#include <iostream>

using namespace std;

Primes::Primes(int length) {
  string primes(length, 'P');
  primes[0] = 'C';
  primes[1] = 'C';

  

  cout << primes << '\n';
}
