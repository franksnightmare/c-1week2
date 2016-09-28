#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <cmath>

struct Vars
{
	unsigned long long value;
    int met;
    size_t iter;
};

size_t const byteSize = 8;

void arguments(Vars &vars, int argc, char **argv);

size_t shiftSearch(unsigned long long number);
size_t truncateSearch(unsigned long long number);
size_t binarySearch(unsigned long long number);
size_t lsbSearch(unsigned long long number);
#endif
