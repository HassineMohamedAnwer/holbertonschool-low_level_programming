#include <stdio.h>
void first(void)__attribute__ ((constructor));
/**
 * first - check the code
 * @constructor: parameter used when  before main is executed
 * Return: none.
 */
void first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
