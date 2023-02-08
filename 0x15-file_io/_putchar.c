#include "main.h"

/**
 * _putchar - writes a single character to standard output
 * @c: The character passed in to print
 * Return: Return output success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
