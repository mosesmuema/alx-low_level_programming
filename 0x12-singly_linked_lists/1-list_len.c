#include "lists.h"
/**
*list_len-prints to stdout number of elements
*@h:linked list
*Return:returns number of elements
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	while (!(h == NULL))
	{
		count++;
		h = h->next;
	}
return (count);
}
