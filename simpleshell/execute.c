#include "main.h"

/**
 * execute - Execute a list of commands
 * @ll: List of strings
 * Return: 1 if success
 */
int execute(char **ll)
{
    pid_t childpid, waitpid;
    int status;

    childpid = fork();
    if (childpid == 0)
    {
        if (execvp(ll[0], ll, NULL) == -1)
        {
            perror(ll[0])
            perror(": No such file or directory");
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
            waitpid = waitpid(childpid, &status, WUNTRACED);
        while (!WIFEXITED(status) && !WIFSIGNALED(status));
    }
}