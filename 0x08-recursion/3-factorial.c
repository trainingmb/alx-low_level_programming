/**
 * factorial - Fractorial,
 * followed by a new line
 * @n: number
 *
 * Return: return factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
		return (1);
	}
	else
	{
		return (factorial(n-1) * n);
	}
}
