#include "ex10.ih"
#include <fstream>
#include <string>

using namespace std;

void capitalizeFile(Vars const &vars)
{
  for (char character : vars.input)
  {
	character = toupper(character);
    cout << character;
  }
}
