#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Function for create a new dog
 * @name: variable
 * @age: variable
 * @owner: variable
 * Return: desc
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i = 0, size1 = 0, size2 = 0;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	while (name[size1] != 0 || owner[size2] != 0)
	{
		size1++;
		size2++;
	}
	dog->name = malloc(sizeof(char) * (size1 + 1));
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (size2 + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= size1; i++)
	{
		dog->name[i] = name[i];
		dog->age = age;
	}
	for (i = 0; i <= size2; i++)
	{
		dog->owner[i] = owner[i];
	}
	return (dog);
}
