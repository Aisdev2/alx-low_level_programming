#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct with dog details.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owber of dog.
 */

struct dog
{
	/*data*/
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef struct dog.
 */

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
