#include "pointer.h"

void Increment(int& value) // pass by reference
{
	value++;
}

int main()
{
	int a = 5;
	int b = 8;

	int& ref = a;
	ref = b;

	Increment(a);
	print(a);
}