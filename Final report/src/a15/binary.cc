#include "main.h"

size_t binarySearch(unsigned long long number)
{
	int msb = 0;
	size_t low = 0;
	size_t high = byteSize * sizeof (number); 
	size_t mid = 0;
	unsigned long long shift = 1;

	while (true)
	{
		mid = (low + high) / 2;
		shift = (unsigned long long)1 << mid;
		
		if (mid == low)
		{
			msb = mid;
			break;
		}
		if (shift > number)
			high = mid;
		else
			low = mid;
	}
	return msb - 1;
}
