#include <iostream>
#include "main.h"

unsigned long long fib(unsigned long long value)
{
	unsigned long long fibval[value + 1] = {0};
	for (size_t index = 0; index != 2; ++index)
	{
		fibval[index] = 1;
	}
	return fib(value, fibval);
}
