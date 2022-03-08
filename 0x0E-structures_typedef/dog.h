#ifndef DOG_H
#define DOG_H

/**
 * struct dog - strcuture for dogs
 * @name: pointer
 * @age: pointer
 * @owner: pointer
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
