/**
 * _pow_recursion - Power,
 * @x: number
 * @y: number raise to
 *
 * Return: return factorial of n
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (_pow_recursion(x, y - 1) * x);
	}
}
