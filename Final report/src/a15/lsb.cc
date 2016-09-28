#include "main.h"

size_t lsbSearch(unsigned long long number)
{
    size_t rest = 0;
    size_t lsb = 1;

    while (true)
    {
		rest = number % 2;
		number /= 2;

		if (rest == 0)
			++lsb;
		else
			break;
    }

    return lsb - 1;
}
