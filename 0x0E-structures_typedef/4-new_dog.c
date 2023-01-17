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
	unsigned int len;

	ret = (dog_t *)malloc(sizeof(dog_t));
	if (ret == NULL)
		return NULL;
	len = 0;
	while (name[len++])
		;
	ret->name = malloc(sizeof(char) * len);
	if (ret->name == NULL)
	{
		free(ret);
		return (NULL);
	}
	while (len != 0)
	{
		ret->name[len] = name[len];
		len--;
	}
	ret->name[len] = name[len];
	ret->age = age;
	len = 0;
	while (owner[len++])
		;
	ret->owner = malloc(sizeof(char) * len);
	if (ret->owner == NULL)
	{
		free(ret->name);
		free(ret);
		return (NULL);
	}
	while (len != 0)
	{
		ret->owner[len] = owner[len];
		len--;
	}
	ret->owner[len] = owner[len];
	return (ret);
}
