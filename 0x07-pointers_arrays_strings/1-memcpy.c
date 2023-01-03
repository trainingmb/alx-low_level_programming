/**
 * _memcpy - copies n bytes from memory
 * area src to memory area dest
 * @dest: the memory area destination
 * @src: the memory area source
 * @n: the size of the memory to copy
 *
 * Return: a pointer to the memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
