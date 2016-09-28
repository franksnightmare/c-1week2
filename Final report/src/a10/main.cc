#include "ex10.ih"

int main(int argc, char *argv[])
{
  Vars vars;
  arguments(vars, argc, argv);
  if (process(vars))
    return 1;
}
