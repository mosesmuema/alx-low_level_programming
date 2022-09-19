#include "main.h"
/**
*swap_int - swaps integers of two declaed variables
*@a:pointer for integer a
*@b:pointer for integer b
*
*Return: is void
*/
void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;

}
