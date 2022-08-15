/*
* int = 4 bytes
* char = 1 byte
* float = 4 bytes
*/

#include "pointer.h"

int main()
{
	//int a = 5; // during execution 4 bytes of memory is allocated

	//int* p; // pointer to integer

	//p = &a; // p stores the address of a

	// p -> address and *p -> value at address

	// dereferencing a pointer:
	/*
	* int p = &a;
	* a = 8;
	* (*p) - return value will be 8
	* (*pointerName) = called as dereferencing a pointer;
	*/

	//std::cout << int(p); // address of a
	//std::cout << int(*p) << "\n"; // 5 because the pointer stores the address where value of a is located
	// this is known a de-reference a pointer to give the stored value.

	/*int x;
	int* y;
	a = 10;
	y = &a;*/
	//print(int(a),"\n");

	//*y = 12; // de-reference the value of pointer

	/*int b = 20;
	*y = b;*/ // value will be modified but not the address

	//print(*y);

	//print(int(a),"\n");

	// Pointer Arithematic
}