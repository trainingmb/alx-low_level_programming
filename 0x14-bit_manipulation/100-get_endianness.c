/**
 * check_for_endianness - Checks the endianness of the underlying system
 * Return: Endianess 0 if little and big if
 */
int check_for_endianness()
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char*) &x;
	return (int)*c;
}

