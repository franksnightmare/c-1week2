#include "ex10.ih"
#include <getopt.h>

using namespace std;

int process(Vars const &vars)
{
  switch (vars.mode)
  {
	case(ERROR):
	  return 1;
	
	case(USAGE):
	  usage();
	break;
	  
    case(VERSION):
      cout << "VERSION: 1.0\n";
    break;
    
    case(LOWER_CASE):
      lowerCaseFile(vars);
    break;
    
    case(CAPITALIZE):
      capitalizeFile(vars);
    break;
  }
  
  return 0;
}
