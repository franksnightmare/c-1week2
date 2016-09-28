#include "main.h"

double const ln2 = 0.693147181;

size_t truncateSearch(unsigned long long number)
{
    size_t msb = 0;
    msb = log(number) / ln2;
    return msb - 1;
}

