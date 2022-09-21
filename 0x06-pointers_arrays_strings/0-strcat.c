#include "main.h"
/**
*_strcat - joins two strings together
*@dest:parameter string
*@src:string to be joined to dest
*Return:dest
*/
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
