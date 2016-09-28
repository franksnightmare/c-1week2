#include "main.h"

using namespace std;

void arguments(Vars &vars, int argc, char **argv)
{
	vars.value = stoull (argv[1], nullptr, 10);
    vars.met = stoi(argv[2], nullptr, 10);
    
    // 1 iteration by default
    vars.iter = (argc == 4 ? stoi(argv[3], nullptr, 10) : 1);
}

