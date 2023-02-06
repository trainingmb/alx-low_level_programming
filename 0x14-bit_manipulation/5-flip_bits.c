
/**
 * flip_bits: how many bit flips to make n into m
 * @n: the before number
 * @m: the after number
 * Return: count of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int o;
	unsigned int count;

	o = n ^ m;
	count = 0;

	while (o != 0)
	{
		count += ((o & 1) > 0);
		o = o >> 1;
	}
	return (count);
}
