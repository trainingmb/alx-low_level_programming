/**
 * _strlen_recursion - return string len,
 * followed by a new line
 * @s: string
 * 
 * Return: return string len
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(&s[1]) + 1);
	}
}
