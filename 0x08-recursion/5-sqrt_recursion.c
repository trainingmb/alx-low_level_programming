/**
 * _sqrt - Sqrt
 * @n: number
 * @m: number
 *
 * Return: return recursion
 */
int _sqrt(int n, int m)
{
	int sqr = m * m;

	if (m > (n / 2))
	{
		return (-1);
	}
	if (sqr == n)
	{
		return (m);
	}
	return (_sqrt(n, m + 1));
}

/**
 * _sqrt_recursion - Sqrt
 * @n: number
 *
 * Return: return recursion
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (_sqrt(n, 1));
	}
}
