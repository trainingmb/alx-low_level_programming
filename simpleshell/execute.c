#include "main.h"

/**
 * execute - Execute a list of commands
 * @ll: List of strings
 * Return: 1 if success
 */
int execute(char **argv, char **env)
{
	pid_t childpid;
	int status;
	int len;

	childpid = fork();
	if (childpid == 0)
	{
		if (execve(argv[0], argv, env) == -1)
		{
			len = _strlen(argv[0]);
			argv[0][len - 1] = '\0';
			perror(argv[0]);
		}
		exit(EXIT_FAILURE);
	}
	else if (childpid < 0)
	{
		perror("Fork");
	}
	else
	{
		do
			waitpid(childpid, &status, WUNTRACED);
		while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (1);
}
