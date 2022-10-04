#include "main.h"
/**
*factorial-prints factorial of given number
*@n:number to be factorised
*Return:(0)
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
