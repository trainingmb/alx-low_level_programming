
/**
 * set_bit: Set the bit at index to 1
 * @n: pointer to the number
 * @index: index of bit
 * Return: 1 fi successful else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (n == ((void *) 0))
	{
		return (-1);
	}
	if (index < 31)
	{
		i = 1 << index;
		n[0] = n[0] | i;
		return (1);
	}
	return (-1);
}
