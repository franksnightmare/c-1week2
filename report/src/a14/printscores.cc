#include "main.h"

using namespace std;

void printScores(Vars &vars)
{
	cout << "This file has " << vars.lines << " lines.\n" <<
		"This file has " << vars.eolComments << " end of line comments.\n" <<
		"This file has " << vars.cStyleComments << " c-style comments.\n" <<
		"This file is at most " << vars.maxIndent << " indentations deep.\n" <<
		"The design quality of this file is " << vars.designQuality << ".\n";
}
