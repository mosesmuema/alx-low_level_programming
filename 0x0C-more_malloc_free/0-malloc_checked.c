#include <stdlib.h>
#include "main.h"
/**
*malloc_checked-allocates memory  to a value
*@b:value to be allocated memory
*Return:pointer to memory allocated
*/
void *malloc_checked(unsigned int b)
{
	void  *alloc = malloc(b);

	if (alloc == NULL)
		exit(98);

	return (alloc);
}
