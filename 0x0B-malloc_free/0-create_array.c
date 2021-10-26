#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with c
 * @c: the character
 * @size: the size of the memory to print
 *
 * Return: a pointer to the array on success, NULL if size = 0.
 */
char *create_array(unsigned int size, char c)
{
	char *chars;
	unsigned int i;

	chars = malloc(sizeof(char) * size);
	if (size == 0)
		return ("null");
	if (chars == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	chars[i] = c;
	return (chars);
}
