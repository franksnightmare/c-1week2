#include <iostream>

using namespace std;

void usage()
{
  cout << "<Text size changer> <Version 1.0>\n\n";
  cout << "Usage: <Text type changer> [--capitalize (--uc, -u)" ",\n";
  cout << "\t--help (-h), --lower-case (--lc, -l), --version"  "(-v)] < file\n";
  cout << "Where:\n";
  cout << "\t--capitalize (--uc, -u); capitalize the letters"   " in 'file'\n";
  cout << "\t--help (-h); shows the usage of the program\n";
  cout << "\t--lower-case (--lc, -l); decapitalize the letters"   " in 'file'\n";
  cout << "\t--version (-v); shows the program's version\n\n";
  cout << "<Text size changer processes 'file' and writes the" " results to the standard\n ";
  cout << "output stream>\n";
}
