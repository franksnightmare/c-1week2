#ifndef BIGNUM_H
#define BIGNUM_H

#include <iostream>

enum sizes{
	BASE_THOUSAND = 1000,
	BASE_TEN = 10,
	SEPARATION = 3
};

void printBig(std::ostream &outStream, long long value);
void printBig(std::ostream &outStream, long long value, size_t steps);
void splitDigits(std::ostream &outStream, long long value, size_t steps);

#endif
