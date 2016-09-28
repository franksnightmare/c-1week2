#include "bignum.h"

using namespace std;

char printSmall(ostream &out, long long value)
{
	if (value == 0)
		return value;
	
	Consts consts;
	
	size_t remainder = posMod(value, consts.baseTen);
	value = (value - remainder) / consts.baseTen;
	return '0' + remainder;
}
