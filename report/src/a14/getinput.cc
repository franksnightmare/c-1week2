#include "main.h"

using namespace std;

size_t getInput(Vars &vars)
{
	if (getline(cin, vars.input))
	{
		vars.input += '\n';
		return 1;
	}
	return 0;
}
