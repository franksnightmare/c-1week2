#include "main.h"

using namespace std;

// Only characters indicative of indentations, lines and comments are
// taken into account. Other characters are simply ignored.
void computeScores(Vars &vars)
{
	for (size_t stringPos = 0; stringPos != vars.input.size(); ++stringPos)
	{
		switch (vars.input[stringPos])
		{
			case('\n'):
				endLine(vars);
			break;
			
			case('/'):
				stringPos = startComment(vars, stringPos);
			break;
			
			case('*'):
				stringPos = endComment(vars, stringPos);
			break;
			
			case('}'):
				--vars.indent;
			break;
			case('{'):
				vars.maxIndent = ++vars.indent > vars.maxIndent ? vars.indent : vars.maxIndent;
			break;
		}
	}
}
