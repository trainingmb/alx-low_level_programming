/**
 * sum_them_all - a function that searches for an integer
 * @n: number of integers
 * Return: the sum of the passed integers
 * or not return 0
 **/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list numbers;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
