#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **g;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(sizeof(int *) * height);

	if (g == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		g[a] = malloc(sizeof(int) * width);

		if (g[a] == NULL)
		{
			for (; a >= 0; a--)
				free(g[a]);
			free(g);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			g[a][b] = 0;
	}
	return (g);
}
