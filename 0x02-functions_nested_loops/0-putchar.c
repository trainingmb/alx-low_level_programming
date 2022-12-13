#include "main.h"


/**
 * main - Entry point
 * Print _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n[] = "_putchar";
	int i = 0;

	for (i = 0 ; i < 8 ; i++)
		_putchar(n[i]);
	_putchar('\n');
	return (0);
}
