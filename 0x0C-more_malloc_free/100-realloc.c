#include <stdlib.h>

/**
 * copyval - copy from one array to another
 * @ptr: copy from
 * @ret: copy to
 * @old_size: old size
 * Return: pointer to the allocated memory or NULL
 */
void copyval(ptr, ret, old_size)
{
	unsigned int i;

	for (i = 0; i < old_size; i++)
	{
		ret[i] = ptr[i];
	}
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: ptr
 * @old_size: old size
 * @new_size: new size
 * Return: pointer to the allocated memory or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char * ret;

	if (new_size > old_size)
	{
		ret = malloc(new_size);
		if (ret == NULL)
		{
			return (NULL);
		}
		copyval(ptr, ret, old_size);
		free(ptr);
		return (ret);
	}
	if (new_size == old_size)
	{
		return ptr;
	}
	if (ptr == NULL)
	{
		if (new_size == 0)
		{
			return (NULL);
		}
		ret = malloc(new_size);
		if (ret == NULL)
		{
			return (NULL);
		}
		return (ret);
	}
	if(ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
}