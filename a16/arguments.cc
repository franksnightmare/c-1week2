#include "main.ih"

void arguments(Vars &vars, int argc, char **argv)
{
	vars.action = USAGE;
	if (argc == 2)
		vars.action = ENCRYPT;
	else if (argc >= 3)
		vars.action = DECRYPT;
	
	readFile(vars);
	readCipher(vars, argv);
}
