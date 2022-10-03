#include "main.h"
/**
*_puts_recursion - printts out a string and a new line
*@s:string to  be output
*
*Return : void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}

}
