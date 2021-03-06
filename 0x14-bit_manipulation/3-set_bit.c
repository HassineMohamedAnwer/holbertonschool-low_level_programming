#include "main.h"
/**
 * set_bit - check the code.
 * @n: int(decimal) to check
 * @index: index
 * Return: 1
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1 << index);
	return (1);
}
