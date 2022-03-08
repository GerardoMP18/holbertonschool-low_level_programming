#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function for frees dogs
 * @d: structure of the variable
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
