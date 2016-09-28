#include <iostream>
#include "main.h"

using namespace std;

int main(int argc, char **argv)
{
	Vars vars;
	arguments(vars, argc, argv);
    
    size_t msbOff = 0;
    for (size_t idx = 0; idx != vars.iter; ++idx)
    {
		// 3 functions that search most significant bit
        switch (vars.met)
        {
	    case 1:
	        msbOff = shiftSearch(vars.value);
	    break;
	    case 2:
	        msbOff = truncateSearch(vars.value);
	    break;
	    case 3:
	        msbOff = binarySearch(vars.value);
	    break;
        }
    }

    size_t lsbOff = lsbSearch(vars.value);

    cout << "The MSB offset is: " << msbOff << "\n";
    cout << "The LSB offset is: " << lsbOff << "\n";
}
