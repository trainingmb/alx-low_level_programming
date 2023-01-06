
/**
 * wildcmp - dfdgdg
 * @s1: string 1
 * @s2: string 2
 *
 * Return: return similar
 */
int wildcmp(char *s1, char *s2)
{
	if (s1[0] == '\0')
	{
		if (s2[0] == '\0')
		{
			return (1);
		}
		else if(s2[0] == '*')
		{
			return (wildcmp(&s1[0], &s2[1]));
		}
		else
		{
			return (0);
		}
	}
	else if (s1[0] == s2[0])
	{
		return (wildcmp(&s1[1], &s2[1]));
	}
	else if (s2[0] == '*')
	{
		int a, b, c;
		
		a = (wildcmp(&s1[0], &s2[1]));
		b = (wildcmp(&s1[1], &s2[1]));
		c = (wildcmp(&s1[1], &s2[0]));
		return a || b || c;
	}
	else
	{
		return (0);
	}
}
