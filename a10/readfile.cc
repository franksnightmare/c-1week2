#include <iostream>
#include "ex10.ih"

using namespace std;

void readFile(Vars &vars)
{
  if (!isatty(fileno(stdin)))
  {
    string line;
    string input;
    while ( getline(cin, line) )
    {
      input = input + line + '\n';
    }
    vars.input = input;
  }
  else
  {
    if (vars.mode != USAGE && vars.mode != VERSION)
    {
      cout << "no file redirection\n";
	  vars.mode = ERROR;
	}
  }
}
