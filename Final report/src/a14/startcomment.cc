#include "main.h"

using namespace std;

// The combination "//" indicates an end of line comment.
// The combination "/*" indicates a c style comment.
// Loose '/' are ignored.
size_t startComment(Vars &vars, size_t stringPos)
{
	if (++stringPos < vars.input.size() && vars.input[stringPos] == '/')
	{
		++vars.eolComments;
		++vars.commentScore;
	}
	else if (stringPos < vars.input.size() && vars.input[stringPos] == '*')
		vars.commentLength = 0;
	else
		--stringPos;
	
	return stringPos;
}
