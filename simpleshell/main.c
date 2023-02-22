#include "main.h"
/**
 * main - main
 * @argc: Argument count
 * @argv: Argument list
 * Return: Return successful
 */
int main()
{
	char status;
	char *line;

	status = 'c';
	status = status + 'c';
	while (1)
	{
		_puts("#cisfun$>");
		line = read_textfile(NULL);
		execute(&line);
	}

	return (EXIT_SUCCESS);
}
