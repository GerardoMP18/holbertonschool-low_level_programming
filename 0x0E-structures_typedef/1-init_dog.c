#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Function for initialize a variable
 * of type struct dog
 * @d: variable
 * @name: variable
 * @age: variable
 * @owner: variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
