#include <stdio.h>
/**
*main - Entry point
*
*Return:0 always(success)
*/
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	putchar(n);

	putchar('\n');

	return (0);
}
