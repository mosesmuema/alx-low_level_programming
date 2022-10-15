#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
*print_numbers-prits numbers followed by a new line
*@separator:string between numbers
*@n:number of arguments
*Retrn:NULL if separator is NULL
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if ((i != (n - 1)) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}

