#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - Define a new type struct dog with the following elements
 * @name: type = char *
 * @age: type = float
 * @owner: type = char *
 *
 * Description: betty
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * my_dog - typedef for struct dog
 */
typedef struct dog my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
