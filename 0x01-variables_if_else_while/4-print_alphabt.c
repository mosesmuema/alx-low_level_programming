#include <stdio.h>
/**
*main -Entry point
*
*Return: 0 ALWAYS(SUCCESS)
*/
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'e' && n != 'q')
		putchar(n);
	}
	putchar('\n');
return (0);
}
