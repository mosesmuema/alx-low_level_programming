#include <stddef.h>
#include "lists.h"
#include <stdio.h>
/**
*print_list-prints elements of a singly linked list
*@h:singly linked list
*Return:number of nodes in list
*/
size_t print_list(const list_t *h)
{
	size_t elem = 0;

	while (!(h == NULL))
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
	h = h->next;
	elem++;
	}
return (elem);
}
