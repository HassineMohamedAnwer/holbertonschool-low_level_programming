#include "main.h"
#include <stdlib.h>
/**
 * _ strdup - duplicates an array of chars
 *
 * @str: array of chars
 *
 * Return: a pointer to the array on success, NULL if str == NULL.
 */
char *_strdup(char *str)
{
	char *chars;
	unsigned int i;

	if (*str == NULL)
		return (NULL);
	chars = malloc(sizeof(str));
	for (i = 0; str != '\0'; i++)
		*(chars + i) = str[i];
	return (chars);
}
