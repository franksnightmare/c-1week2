#include "main.h"

size_t shiftSearch(unsigned long long number)
{
    size_t msb = 0;
    
    while (true)
    {
		number = number >> 1;
		++msb;
		if (number == 1)
			break;
    }
    
    return msb - 1;
}

