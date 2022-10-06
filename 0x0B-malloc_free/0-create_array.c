#include "main.h"
#include <stdlib.h>
/**
*create_array-prints an array of characters
*@size:size of the aray
*@c:character to be added
*Return:If size == 0 or the function fails - NULL.
*         Otherwise - a pointer to the array.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		s[a] = c;
	return (s);
}


