#include <stdlib.h>
/**
 * alloc_grid - create 2D array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int i;
	int n;
	int **p;

	i = n = 0;
	if (height < 1)
		return (NULL);
	p = (int **)malloc(height * sizeof(p));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (n = 0; n < i; n++)
				free(p[n]);
			free(p);
			return (NULL);
		}
		for (n = 0; n < width; n++)
			p[i][n] = 0;
	}
	return (p);
}
