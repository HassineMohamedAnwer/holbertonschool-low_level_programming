#include <stdio.h>

/**
 * main- prints the name of the program + new line.
 * @argc : length of argv
 * @argv : array of the command line arguments (strings)
 * Return: always 0
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argc - 1);
	return (0);
}
