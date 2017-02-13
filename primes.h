#ifndef PRIMES_H
#define PRIMES_H

#include <string>

class Primes {
public:
	Primes(int length);
	void find(int number);
	void findInterval(int start, int stop);
	void print();
	void printHighest();
private:
	std::string primes;
};

#endif
