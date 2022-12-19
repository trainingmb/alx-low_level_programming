#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * password - generate random uppercase, lowercase or number
 * @c: length of password
 * @pwd: generated password pointer
 * Return: Returns length n
 */
int password(int c, char pwd[])
{
	int s;
	int i = 0, sum = 0;

	srand(time(NULL));

	while (i < c)
	{
		s = rand() % 3;
		switch (s)
		{
			case 0:
				pwd[i] = ((rand() % 26) + 'a');
				break;
			case 1:
				pwd[i] = ((rand() % 26) + 'A');
				break;
			case 2:
				pwd[i] = (rand() % 9) + '0';
				break;
		}
		sum += pwd[i];
		i++;
		if (sum < 2772)
		{
			pwd[i] = 2772 - sum - '0';
			i++
			break;
		}
	}
	return (i);
}

/**
 * main - generate valid password
 *
 * Return: Always return 0
 */
int main(void)
{
	char pwd[60];
	int n;

	n = password(60, pwd);
	pwd[n] = '\0';
	printf("%s\n", pwd);

	return (0);
} 
