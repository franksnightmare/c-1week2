#include "ex10.ih"
#include <getopt.h>

using namespace std;

void arguments(Vars &vars, int numArgs, char *param[])
{
  const struct option longOpts[] =
  {
    { "capitalize", 0, 0, 'c' },
    { "help", 0, 0, 'h' },
    { "lc", 0, 0, 'l' },
    { "lower-case", 0, 0, 'l' },
    { "uc", 0, 0, 'c' },
    { "version", 0, 0, 'v' },
    { 0, 0, 0, 0 }
  };
  
  int flag;
  while ( (flag = getopt_long(numArgs, param, "chlv", longOpts, 0)) != -1)
  {
	switch (flag)
	{
	  case('h'):
	    vars.mode = USAGE;
	  break;
	  
	  case('v'):
	    if (vars.mode != USAGE)
		  vars.mode = VERSION;
	  break;
	  
	  case('l'):
	    if (vars.mode == CAPITALIZE)
	    {
	      cout << "ERROR: commands not allowed as combination (\'-c\' \'-l\')\n";
		  vars.mode = ERROR;
	    }
		else if (vars.mode != USAGE && vars.mode != VERSION)
		  vars.mode = LOWER_CASE;
      break;
      
	  case('c'):
	    if (vars.mode == LOWER_CASE)
	    {
	      cout << "ERROR: commands not allowed as combination (\'-c\' \'-l\')\n";
	      vars.mode = ERROR;
	    }
	    else if (vars.mode != USAGE && vars.mode != VERSION)
	      vars.mode = CAPITALIZE;
	  break;
	}
  }
  
  readFile(vars);
}
