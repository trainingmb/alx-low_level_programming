#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from,
 * followed by a new line.
 * Return: 0
 **/
int main(void)
{
    //Prints the base file expanded from
    //__BASE_FILE__
	printf("%s\n", __BASE_FILE__);
	return (0);
}
