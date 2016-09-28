#include "main.h"

int main (int argc, char **argv)
{
	Vars vars;
	while (getInput(vars))
	{
		computeScores(vars);
	}
	computeQuality(vars);
	printScores(vars);
}
