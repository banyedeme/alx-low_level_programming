#include <stdlib.h>
#include "dog.h"
/**
* init_dog - init a var of type struct dog
* @d: pointer that initializes struct dog
* @name:initilization of name
* @age: initialization of age
* @owner:initialization of owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

