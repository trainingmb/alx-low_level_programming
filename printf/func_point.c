#include "main.h"

/**
 * uint - converts an integer to an str
 * @args: Pointer to va list
 * Return: the int in a string
 */
char *_uint(va_list *args)
{
	return (uint2str(va_arg(*args, int)));
}