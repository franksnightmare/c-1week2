#include "main.h"

unsigned long long fib(unsigned long long value, unsigned long long fibval[])
{
    if (value < 2) 
        return fibval[value] = 1;	
    
    if (fibval[value] != 0) 
	    return fibval[value];
    
    return fibval[value] = fib(value - 1, fibval) +                   fibval[value - 2];
}
