#include <stdlib.h>
#include "main.h"
/**
*_strdup-return pointer
*@str:string to be duplicated
*Return:null if str is null
*	pointer to duplicated strin on success
*/
char *_strdup(char *str)
{
	char *p;
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		b++;
	p = malloc(sizeof(char) * (b + 1));
	if (p == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		p[a] = str[a];
	p[b] = '\0';
	return (p);
}
