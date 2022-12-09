#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Print reversed alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
		char n = 'z';

		while (n >= 'a')
		{
			putchar(n);
			n--;
		}
		putchar('\n');
		return (0);
}
