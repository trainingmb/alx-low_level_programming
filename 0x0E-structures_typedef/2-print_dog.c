#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: pointer a dog variable
 **/
void print_dog(struct dog *d)
{
	if (d == ((void *) 0))
		;
	else
	{
		if (d->name == ((void *) 0))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age == ((void *) 0))
			printf("Age: (nil)\n");
		else
			printf("Age: d\n", d->age);

		if (d->owner == ((void *) 0))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %f\n", d->owner);
	}
}
