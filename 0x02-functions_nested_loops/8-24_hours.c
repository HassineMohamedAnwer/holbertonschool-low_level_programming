#include <stdio.h>
#include "main.h"

/**
* jack_bauer - prints the last digit of the random
* Return: Always 0 (Success)
* the string and is greater than 5
* the string and is 0
* the string and is less than 6 and not 0
*/
void jack_bauer(void)
{
int a;
int b;
for (a = 0; a <= 23; a++)
{
for (b = 0; b <= 59; b++)
{
_putchar (a / 10 + '0');
_putchar (a % 10 + '0');
_putchar (':');
_putchar (b / 10 + '0');
_putchar (b % 10 + '0');
_putchar ('\n');
}
}
}
