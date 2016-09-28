#include "bignum.h"

using namespace std;

int main(int argc, char **argv)
{
	printBig(cout, 5000000);
	cout << '\n';
	printBig(cout, 12345678);
	cout << '\n';
	printBig(cout, 0);
	cout << '\n';
	printBig(cout, -12345678);
	cout << '\n';
	printBig(cout, -5000000);
	cout << '\n';
}
