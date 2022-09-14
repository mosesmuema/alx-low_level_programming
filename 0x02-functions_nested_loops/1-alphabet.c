#include "main.h"
#include <stdio.h>

/**
*print_alphabet - prints alphaet in lowercase
*
*Return: always (0)
*/
void print_alphabet(void)
{
	int n;


	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
