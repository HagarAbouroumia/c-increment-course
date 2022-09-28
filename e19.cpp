#include <iostream>
#include <string>
using namespace std;

int main(void)
{
/**
	int a = 10;
	int &p = a; // It is correct
	// but
	int &p;
	p = a; // It is incorrect as we should declare and initialize references at single step
**/

	// a reference cannot be re-assigned, and must be assigned at initialization.
	int a = 5;
	int b = 6;
	int &p = a;
	int &p = b; // This will throw an error of "multiple declaration is not allowed"

	return 0;
}
