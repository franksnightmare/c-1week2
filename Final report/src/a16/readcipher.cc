#include "main.ih"

void readCipher(Vars &vars, char **argv)
{
	if (vars.action == USAGE)
	{
		vars.input = "At least input a cipher.";
		vars.cipher = "nocipher";
	}
	else
	{
		vars.cipher = argv[1];
	}
}
