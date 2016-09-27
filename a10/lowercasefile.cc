#include "ex10.ih"
#include <fstream>
#include <string>

using namespace std;

void lowerCaseFile(Vars const &vars)
{
  for (char character : vars.input)
  {
	character = tolower(character);
    cout << character;
  }
}
