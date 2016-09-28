#include "main.h"

unsigned long long fib(unsigned long long value, unsigned long long fibval[])
{
    
    if (value <= 2) 
    {
		fibval[0] = 1;
        fibval[1] = 1;
		return 1;
    }
    
    if (fibval[value - 1] != 0) 
		return fibval[value - 1];
    
	fibval[value - 1] = fib(value - 1, fibval) + fibval[value - 3];
	return fibval[value - 1];
}
