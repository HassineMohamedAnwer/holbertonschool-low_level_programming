#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet x10
* number stored in the variable n
* the string and is greater than 5
* the string and is 0
* the string and is less than 6 and not 0
*/
void print_alphabet_x10(void)
{
int i = 0;
char c;
while (i < 10)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
i++;
}
}
