#include "main.h"
/**
 * main - main
 * Return: Return successful
 */
int main(void)
{
	char status;
	char *line;
	char *env[] = {NULL};

	status = 'c';
	status = status + 'c';
	while (1)
	{
		_puts("#cisfun$>");
		line = read_textfile(NULL);
		execute(&line, env);
	}

	return (EXIT_SUCCESS);
}
