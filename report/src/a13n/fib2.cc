#include "main.h"

unsigned long long fib(unsigned long long value, unsigned long long fibval[])
{
    if (value <= 2) 
    {
		return 1;
    }
    
    if (fibval[value] != 0) 
		return fibval[value];
    
    unsigned long long fibNum = fib(value - 1, fibval);
	fibval[value] = fibNum + fib(value - 2, fibval);
	
	return fibval[value];
}
