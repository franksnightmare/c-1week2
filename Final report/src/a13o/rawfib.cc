#include "main.h"

unsigned long long rawfib(unsigned long long value)
{
    if (value <= 2)
	    return 1;
    else
	    return rawfib(value - 1) + rawfib(value - 2);
}
