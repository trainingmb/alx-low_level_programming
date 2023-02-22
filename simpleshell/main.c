#include "main.h"
/**
 * main - main
 * Return: Return successful
 */
int main(void)
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
