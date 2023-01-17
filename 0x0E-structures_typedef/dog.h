#ifndef DOG_HEADER
#define DOG_HEADER dog.h
/**
 * struct dog - Define a new struct dog with name, age, owner
 * @name: pointer to name of the dog
 * @age: float of age of the dog
 * @owner: pointer to owner of dog
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif