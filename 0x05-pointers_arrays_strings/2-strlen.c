#include "main.h"
/**
*_strlen - shows length of string
*@s:is  a pointer to a character
*
*Return: length of string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
