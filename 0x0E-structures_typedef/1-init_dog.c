#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initalizing a variable of type stuct dog
 * @d: element in struct dog.
 * @name: name of dog.
 * @age: dog age.
 * @owner: owner of dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

