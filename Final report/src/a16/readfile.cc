#include "main.ih"

void readFile(Vars &vars)
{
	string line;
	string input;
	while (getline(cin, line))
	{
		input = input + line + '\n';
	}
	vars.input = input;
}
