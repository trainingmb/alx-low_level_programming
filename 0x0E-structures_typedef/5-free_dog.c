#include "dog.h"
/**
 * free_dog - function that frees dogs
 * @d: pointer a dog variable
 **/
void free_dog(dog_t *d)
{
	if (d != ((void *) 0))
	{
		if (d->name != ((void *) 0))
		{
			free(d->name);
		}
		if (d->owner != ((void *) 0))
		{
			free(d->owner);
		}
		free(d);
	}
}
