
/**
 * p - dfdgdg
 * @s: string 1
 * @n: len
 * Return: return similar
 */
int p(char *s, int n)
{
	if (s[0] == '\0')
	{
		return (n);
	}
	else
	{
		return (p(&s[1], n + 1));
	}
}


/**
 * q - dfdgdg
 * @s: string 1
 * @n: len
 * @m: len
 *
 * Return: return similar
 */
int q(char *s, int n, int m)
{
	if (n >= m)
	{
		return (1);
	}
	else if (s[n] == s[m])
	{
		return (q(s, n + 1, m - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - dfdgdg
 * @s: string 1
 *
 * Return: return similar
 */
int is_palindrome(char *s)
{
	int len;

	len = p(s, 0);
	return (q(s, 0, len - 1));
}
