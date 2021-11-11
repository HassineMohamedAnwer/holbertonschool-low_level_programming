#include "lists.h"

/**
 * print_list - check the code
 * @h: list
 * Return: Always number of elements.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			i++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			i++;
		}
	}
	return (i);
}
