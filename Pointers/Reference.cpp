#include "pointer.h"

void Increment(int* value)
{
	(*value)++;
}

int main()
{
	int a = 5;
	Increment(&a);
	print(a);
}