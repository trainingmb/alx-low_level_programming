#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: 0
 */
int main(void)
{
	int i;
	long num = 612852475143;

	for (i = (int) sqrt(num); i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	return (0);
}
