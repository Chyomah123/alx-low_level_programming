#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum number in the array
 * @max: maximum number in the array
 * Return: Pointer to an array or null
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
		return (NULL);
	j = (max - min) + 1;
	p = malloc(sizeof(*p) * j);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < j && min <= max; i++, min++)
		*(p + i) = min;
	return (p);
}

