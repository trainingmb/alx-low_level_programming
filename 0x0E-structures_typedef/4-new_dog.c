#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: char pointer to name of dog
 * @age: float for age of dog
 * @owner: char pointer to owner of dog
 * Return: pointer a dog variable
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ret;
	unsigned int len, i;

	ret = (dog_t *)malloc(sizeof(dog_t));
	if (ret == NULL)
		return (NULL);
	len = i = 0;
	while (name[len++])
		;
	ret->name = malloc(sizeof(char) * (len + 1));
	if (ret->name == NULL)
	{
		free(ret);
		return (NULL);
	}
	for (i = 0; i < len; i++)
		ret->name[i] = name[i];
	ret->name[len] = name[len];
	ret->age = age;
	len = 0;
	while (owner[len++])
		;
	ret->owner = malloc(sizeof(char) * (len + 1));
	if (ret->owner == NULL)
	{
		free(ret->name);
		free(ret);
		return (NULL);
	}
	for (i = 0; i < len; i++)
		ret->owner[i] = owner[i];
	ret->owner[len] = owner[len];
	return (ret);
}
