#include "main.h"
/**
*_strlen_recursion-prints ot the size of a string
*@s:strring whose length is sort
*Return:(0)
*/
int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
