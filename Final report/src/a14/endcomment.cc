#include "main.h"

using namespace std;

// The combination "*/" indicates the end of a c style comment.
// Loose '*' are ignored.
size_t endComment(Vars &vars, size_t stringPos)
{
	if (stringPos < vars.input.size() && vars.input[++stringPos] == '/')
	{
		++vars.cStyleComments;
		vars.commentScore += vars.commentLength == vars.lines ?
			vars.commentLength - 1 : 1;
	}
	else
		--stringPos;
	return stringPos;
}
