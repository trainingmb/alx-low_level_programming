/**
 * get_endianness - Checks the endianness of the underlying system
 * Return: Endianess 0 if little and big if
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;
	return ((int)*c);
}

