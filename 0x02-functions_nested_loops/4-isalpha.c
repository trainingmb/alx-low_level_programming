#include "main.h"

/**
 * _isalpha - Checks if the passed inttger is a  letter
 * @c: The letter to test
 * Return: Returns 1 if is letter else return 0
 */
int _isalpha(int c)
{
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
