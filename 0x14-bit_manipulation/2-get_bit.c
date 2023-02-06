
/**
 * get_bit - Get the bit at index
 * @n: pointer to the number
 * @index: index of bit
 * Return: 1 or 0 if successful else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index < 31)
	{
		i = 1 << index;
		return ((n | i) != 0);
	}
	return (-1);
}
