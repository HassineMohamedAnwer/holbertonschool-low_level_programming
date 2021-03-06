#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer for list
 *
 * Return: the number of elements in a linked dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nn = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		nn++;
	}

	return (nn);
}
