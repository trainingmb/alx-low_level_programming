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
		ret[i] = malloc(sizeof(int) * width);
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
	return (ret);
}
