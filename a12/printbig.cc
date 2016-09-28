#include "bignum.h"

using namespace std;

void printBig(ostream &out, long long value)
{
	if (value == 0)
		return;
	
	if (value < 0)
	{
		value = -value;
		out << '-';
	}
	
	// This loop removes 3 digits of the value and prints them.
	Consts consts;
	string remainder;
	for (size_t digit = 0; digit < consts.steps; digit++)
	{
		remainder = printSmall(out, value) + remainder;
		value = value / consts.baseTen;
	}
	
	printBig(out, value);
	if (value != 0)
		out << '\'';
	out << remainder;
}
