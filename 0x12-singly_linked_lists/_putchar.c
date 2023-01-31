#include <stdlib.h>
#include <unistd.h>
/**
 * _putchar - writes a single character to standard output
 * @c: The character passed in to print
 * Return: Return output success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _pow - raise u to n
 * @u: The unsigned int
 * @n: exponent
 * Return: Return output success
 */
unsigned int _pow(unsigned int u, int n)
{
    unsigned int i;

    i = u;
    while (n > 1)
    {
        n--;
        i *= u;
    }
    return i;
}

/**
 * _putuint - writes a unsigned int
 * @u: The unsigned int
 * Return: Return output success
 */
int _putuint(unsigned int u)
{
	char i;
	unsigned int f;
	int n;

	i = 1;
	f = u;
	n = 1;
	while (f / 10)
    {
        f /= 10;
        n++;
    }
    printf("\n<<10 ^ %d = %d>>\n",n ,pow(10, n));
    while (n >= 0)
    {
        f = ((int) (u / _pow(10, n))) % 10;
        n--;
        i = i && _putchar(f + '0');
    }
	return i;
}

/**
 * _putstr - writes a str
 * @str: The string
 */
void _putstr(char *str)
{
    if (str != ((void *)0))
    {
        while (*str != '\0')
        {
            _putchar(*str);
            str++;
        }
    }
}

/**
 * _putstrlen - writes a str
 * @str: The string
 * @len: the string size
 */
void _putstrlen(char *str, unsigned int len)
{
    if (str != ((void *)0))
    {
        while (len > 0)
        {
            _putchar(*str);
            str++;
            len--;
        }
    }
}
