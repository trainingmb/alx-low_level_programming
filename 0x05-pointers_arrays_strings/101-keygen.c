#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * password - generate random uppercase, lowercase or number
 * @c: length of password
 * @pwd: generated password pointer
 *
 */
void password(int c, char pwd[])
{
	int s;
	int i = 0;

	srand(time(NULL));

	while (i < c)
	{
		s = rand() % 4;
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
			case 3:
				pwd[i] = ((rand() % 15) + 12);
				break;
		}
		i++;
	}
}

/**
 * main - generate valid password
 *
 * Return: Always return 0
 */
int main(void)
{
	char pwd[24];

	password(23, pwd);
	pwd[23] = '\0';
	printf("%s\n", pwd);

	return (0);
} 
