#ifndef MAIN_H
#define MAIN_H

#include <iostream>

// Design Quality is multiplied by 2
// therefore it starts at 2 and is
// later multiplied.
struct Vars{
	std::string input;
	
	size_t indent = 0;
	size_t maxIndent = 0;
	
	size_t lines = 0;
	size_t lineScore = 0;
	
	size_t eolComments = 0;
	size_t cStyleComments = 0;
	size_t commentScore = 0;
	size_t commentLength = 0;
	
	size_t designQuality = 2;
};

size_t const indentLimit = 3;
size_t const lineLimit = 30;
size_t const percent = 100;

size_t getInput(Vars &vars);

void computeScores(Vars &vars);
void computeQuality(Vars &vars);
void printScores(Vars &vars);
void endLine(Vars &vars);

size_t startComment(Vars &vars, size_t stringPos);
size_t endComment(Vars &vars, size_t stringPos);

#endif
