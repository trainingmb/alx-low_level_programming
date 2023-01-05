/**
 * _prime - prime
 * @n: number
 * @m: number
 *
 * Return: return prime
 */
int _prime(int n, int m)
{
	if (m > (n / 2))
	{
		return (1);
	}
	if (!(n % m))
	{
		return (0);
	}

	return (_prime(n, m + 1));
}

/**
 * is_prime_number - prime
 * @n: number
 *
 * Return: return recursion
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_prime(n, 2));
	}
}
