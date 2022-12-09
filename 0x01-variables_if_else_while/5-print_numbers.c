#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Print single digit
 * Return: Always 0 (Success)
 */
int main(void)
{
		int n = '0';

		while (n <= '9')
		{
			putchar(n++);
		}
		putchar('\n');
		return (0);
}
