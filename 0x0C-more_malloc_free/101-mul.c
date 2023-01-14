#include <stdlib.h>
#include<stdio.h>

/**
 * reversestr - reverse order of string
 * @s: string to reverse
 * @size: size of s
 */
void reversestr(char* s, unsigned size)
{
	unsigned i;
	char temp;

	for (i = 0; i < (size / 2) ; i++)
	{
		temp = s[i];
		s[i] = s[size - i - 1];
		s[size - i - 1] = temp;
	}
}

/**
 * strsize - return size of string
 * @s: string too find size
 * 
 * Return: size of string s
 */
unsigned int strsize(char* s)
{
	unsigned int size;

	for (size = 0; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * scanstr - scan str for non digit and shift chars
 * @s: string
 * @size: size of s
 * Return: 0 if str contains non-digit
 */
char scanstr(char* s, unsigned int size)
{
	unsigned i;

	for (i = 0; i < (size); i++)
	{
		if( s[i] < '0' || s[i] > '9')
			return (0);
		else
			s[i] -= '0'; 
	}
	return (1);
}

/**
 * undoscanstr - turn str back to standard string
 * @s: string
 * @size: size of s
 */
void undoscanstr(char* s, unsigned int size)
{
	unsigned i;

	for (i = 0; i < (size); i++)
	{
		s[i] += '0'; 
	}
}

/**
 * addto - adding add to s[pos]
 * @add: what to add
 * @s: string
 * @pos: operating position
 */
void addto(unsigned int add,char *s, unsigned int pos)
{
	unsigned int sum;
	
	sum = (add + s[pos]);
	if((add + s[pos]) > 9)
	{
		s[pos] = (char) (sum % 10);
		addto(sum / 10, s, pos + 1);
	}
	else
	{
		s[pos] = sum;
	}
}

/**
 * multiply - multiply 2 strings
 * @s1: string 1
 * @ss1: size of s1 string
 * @s2: string 2
 * @ss2: size of s2 string
 * @os: output string
 */
void multiply(char *s1,unsigned int ss1,char *s2, unsigned int ss2, char *os)
{
	unsigned int i, j;

	for (j = 0; j < ss2; j++)
	{
		for (i = 0; i < ss1; i++)
		{
			addto(s1[i] * s2[j], os, j + i);
		}
	}
}


/**
 * main - Prints the number of arguments passed into it
 * @argc: Argument Count
 * @argv: A pointer array of size argument count
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	unsigned int n, m;
	char * result;

	if(argc != 3 )
	{
		printf("Error\n");
		exit(98);
	}
	n = strsize(argv[1]);
	m = strsize(argv[2]);
	if(!scanstr(argv[1], n) || !scanstr(argv[2], m))
	{
		printf("Error\n");
		exit(98);
	}
	result = calloc(n + m + 1, sizeof(char));
	if(result == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	reversestr(argv[1], n);
	reversestr(argv[2], m);
	multiply(argv[1], n, argv[2], m, result);
	undoscanstr(result, n + m + 1);
	reversestr(result, n + m + 1);

	printf("%s\n", result);

	return (0);
}
