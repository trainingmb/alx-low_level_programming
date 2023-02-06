
/**
 * binary_to_uint: turn a binary string to an integer
 * @b: the binary string
 * Return: Either the int equivalent or NULL if not valid
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	const char  *iter;

	x = 0;
	if (b == ((void *)0))
		return (0);
	for (iter = b; iter[0] != '\0'; iter++)
	{
		if (iter[0] == '0')
			x = x * 2;
		else if (iter[0] == '1')
			x = x * 2 + 1;
		else
			return (0);
	}
	return (x);
}
