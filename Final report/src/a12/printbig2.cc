#include "bignum.h"

using namespace std;

void printBig(ostream &outStream, long long value, size_t steps)
{
	if (value == 0)
	{
		if (steps == 0)
		{
			outStream << '0';
			return;
		}
		return;
	}
	
	if (value < 0)
	{
		value = -value;
		outStream << '-';
	}
	
	printBig(outStream, value / BASE_THOUSAND, steps + 1);
	splitDigits(outStream, value, 0);
}
