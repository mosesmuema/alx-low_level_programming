#include "lists.h"
/**
*print_listint-prints all elements in a node
*@h:singly linked list
*Return:number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		elem++;
		printf("%d\n", h->n);
		h = h->next;
	}
return (elem);
}
