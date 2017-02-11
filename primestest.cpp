#include "primes.h"

using namespace std;

int main() {
  Primes primes(200);
  // primes.find(2);
  // primes.find(3);
  // primes.find(5);
  primes.findInterval(2,200);
  primes.print();

  Primes test(100000);
  test.findInterval(2,100000);
  test.printHighest();
  return 0;
}
