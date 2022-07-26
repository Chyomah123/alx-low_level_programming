#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * alloc_grid - A function that points to a 2-dimensional array
 * of integers
 * @width: The width of the 2-dimensional array
 * @height: The height of the 2-dimensional array
 * Return: A pointer to a 2-dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **t;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	t = malloc(sizeof(t) * height);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		t[i] = malloc(sizeof(int) * width);
		if (t[i] == NULL)
		{
			while (--i >= 0)
				free(t[i]);
			free(t);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			t[i][j] = 0;
	}
	return (t);
}
