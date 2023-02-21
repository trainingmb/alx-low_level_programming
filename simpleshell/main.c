#include "main.h"
/**
 * main - main
 * @argc: Argument count
 * @argv: Argument list
 * Return: Return successful
 */
int main(int argc, char **argv)
{
	char status;
	char *line;
	size_t bufsize;

	status = 'c';
	status = status + 'c';
	argc = argc - 1 + 1;
	_puts(argv[0]);
	while (1)
	{
		_puts("#cisfun$>");
		line = read_textfile(NULL);
		execute(&line);
		getline(&line, &bufsize, stdin);
		_puts(line);
	}

	return (EXIT_SUCCESS);
}
