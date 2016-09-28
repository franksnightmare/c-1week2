#include "bignum.h"

using namespace std;

// This recursive function prints n digits then a seperator (').
// Here n is SEPARATION.
void splitDigits(ostream &outStream, long long value, size_t steps)
{
	if (steps == SEPARATION)
	{
		outStream << '\'';
		return;
	}
	if (value == 0)
		return;
	
	splitDigits(outStream, value / BASE_TEN, steps + 1);
	
	outStream << (char)('0' + value % BASE_TEN);
}
