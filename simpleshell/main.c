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

    while(1)
    {
        puts("#cisfun$>");
        line = read_textfile(NULL);
        puts(line);
        puts("\n");
    }

    return EXIT_SUCCESS;
}
