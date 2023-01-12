#include <stdlib.h>

/**
 * alloc_grid - create a grid
 * @width: dimension 1
 * @height: dimension 2
 *
 * Return: grid or null
 */
int **alloc_grid(int width, int height)
{
	int **ret;
	int i, j;

	i = 0;
	j = 0;
	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	ret = malloc(sizeof(int *) * height);
	if (ret == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ret[i] = mallac(sizeof(int) * width);
		if (ret[i] == NULL)
		{
			while (--i >= 0)
			{
				free(ret[i]);
			}
			free(ret);
			return (NULL);
		}
		else
		{
			for (j = 0; j < width; j++)
			{
				ret[i][j] = 0;
			}
		}
	}
	ret = malloc(sizeof(char) * (size1 + size2 + 1));

	if (ret == NULL)
		return (NULL);

	while (i < size1)
	{
		ret[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < size2)
	{
		ret[i + size1] = s2[i];
		i++;
	}
	ret[size1 + size2] = 0;
	return (ret);
}
