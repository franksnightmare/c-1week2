#ifndef BIGNUM_H
#define BIGNUM_H

#include <iostream>

struct Consts{
	const size_t baseTen = 10;
	const size_t steps = 3;
};

size_t posMod(long long value, size_t modulus);
void printBig(std::ostream &out, long long value);
char printSmall(std::ostream &out, long long value);

#endif
