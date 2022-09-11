#include <stdio.h>

/**
*main - Entry point
*
*Return: 0 Always (success)
*/
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
