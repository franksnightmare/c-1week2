#include <iostream>
#include "main.h"

using namespace std;

int main(int argc, char **argv)
{
    unsigned long long value = stoull(argv[1]);
    unsigned long long fibNumber = 0;
	
	for (size_t number = 0; number <= value; number++)
	{
		if (argc > 2)
			fibNumber = rawfib(value);
		else
			fibNumber = fib(value);
	}

    cout << "The " << value << "th fibonacci number is: " << fibNumber <<"\n";
}
