#include <iostream>
#include "main.h"

using namespace std;

int main(int argc, char **argv)
{
    unsigned long long idx = stoull(argv[1]);
    unsigned long long fibNumber = 0;
    unsigned long long fibval[idx + 1] = {0};
	
    for (size_t step = 0; step < idx; ++step)
    {	
         if (argc > 2)
	     fibNumber = rawfib(idx);
	 else
	     fibNumber = fib(idx,fibval);
    }

    cout << "The " << idx << "th fibonacci number is: " << fibNumber <<"\n";
	
}
