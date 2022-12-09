#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Print alphabet lower upper
 * Return: Always 0 (Success)
 */
int main(void)
{
		char n = 'a';

		while (n <= 'z')
		{
			putchar(n++);
		}
		n = 'A';
		while (n <= 'Z')
		{
			putchar(n++);
		}
		putchar('\n');
		return (0);
}
