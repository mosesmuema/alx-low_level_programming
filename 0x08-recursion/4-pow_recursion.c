#include "main.h"
/**
*_pow_recursion-prints x to the power of y
*@x:base value
*@y:exponential value
*Return:x raised to y
*/
int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);
			if (y == 0)
				return (1);
					if (y < 0)
						return (-1);
	return (x * _pow_recursion(x, y-1);
}
