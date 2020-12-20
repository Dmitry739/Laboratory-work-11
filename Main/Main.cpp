#include <iostream>
#include "Polish.h"

int Main()
{
	char* s;
	s = "5^3";
	TPolish P;

	cout << P.Calculation(s);
	return 0;
}
