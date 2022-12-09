#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Print Hexadecimal
 * Return: Always 0 (Success)
 */
int main(void)
{
		char n = '0';

		while (n <= '9')
		{
			putchar(n++);
		}
		n = 'a';
		while (n <= 'f')
		{
			putchar(n++);
		}
		putchar('\n');
		return (0);
}
