#include <unistd.h>
/**
*_putchar-prints out output
*@c:character to e output
*
*Return:1 on success
*-1 on failure
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
