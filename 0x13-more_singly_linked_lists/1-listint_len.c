#include "lists.h"
/**
*listint_len-prints number of elements
*@h:linked list
*Return:number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		elem++;
		h = h->next;
	}
return (elem);
}
