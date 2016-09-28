#include "main.h"

void endLine(Vars &vars)
{
	size_t mul1 = (++vars.lines > lineLimit ? 2 : 1);
	size_t mul2 = (vars.indent > indentLimit ? 2 : 1);
	vars.lineScore += mul1 * mul2;
	++vars.commentLength;
}
