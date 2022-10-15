#include <stdarg.h>
#include "variadic_functions.h"
/**
*sum_them_all-returns sum of all parameters
*@n:numer of arguments
*Return:0 when n==0, else total
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
