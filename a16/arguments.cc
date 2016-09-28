#include "main.ih"

Vars arguments(int argc, char **argv)
{
	
	string line;
	string input;
	while (getline(cin, line))
	{
		input += line;
	}
	
	int action = USAGE;
	if (argc == 2)
		action = ENCRYPT;
	else if (argc >= 3)
		action = DECRYPT;
	
	Vars args;
	
	if (action == USAGE)
	{
		args.input = "At least input a cipher.";
		args.cipher = "nocipher";
	}
	else
	{
		args.input = input;
		args.cipher = argv[1];
	}
	
	args.action = action;
	return args;
}
