#include "bignum.h"

size_t posMod(long long value, size_t modulus)
{
	return ((value % modulus) + modulus) % modulus;
}
