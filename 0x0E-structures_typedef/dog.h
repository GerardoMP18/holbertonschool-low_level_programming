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
/**
 * dog_t - new name for the type strutc dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
