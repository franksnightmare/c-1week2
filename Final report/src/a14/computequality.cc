#include "main.h"

void computeQuality(Vars &vars)
{
	vars.designQuality *= percent * vars.commentScore;
	vars.designQuality /= vars.lineScore;
	vars.designQuality = vars.designQuality > percent ?
		percent : vars.designQuality;
}
