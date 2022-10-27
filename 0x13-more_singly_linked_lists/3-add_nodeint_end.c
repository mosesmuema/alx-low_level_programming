#include "lists.h"
/**
*add_nodeint_end-adds new node at end of line
*@head:pointer to address of head of list
*@n:integer contained in new node
*Return:address of new element
*	NULL on failure
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	last = malloc(sizeof(listint_t));
	if (last == NULL)
		return (NULL);
	last->n = n;
	last->next = NULL;

	if (*head == NULL)
		*head = last;
	else
	{
		new = *head;
		while (new->next != NULL)
			new = new->next;
		new->next = last;
	}
	return (*head);
}
