#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 2;

	printf("1");
	while (n < 101)
	{
		printf(" ");
		switch (((n % 3) == 0) + (2 * ((n % 5) == 0)))
		{
			case 0:
				printf("%d", n);
				break;
			case 1:
				printf("Fizz");
				break;
			case 2:
				printf("Buzz");
				break;
			case 3:
				printf("Fizz");
				printf("Buzz");
				break;
			default:
				break;
		}
		n++;
	}
	printf("\n");
	return (0);
}
