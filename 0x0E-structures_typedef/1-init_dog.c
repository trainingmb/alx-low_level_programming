#include "dog.h"
/**
 * init_dog - Initialize a variable of type struct dog
 * @d: pointer a dog variable
 * @name: char pointer to name of dog
 * @age: float for age of dog
 * @owner: char pointer to owner of dog
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == ((void *) 0))
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
