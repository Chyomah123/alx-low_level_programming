#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches an integer
 * @array: pointer array
 * @size: number elements in array
 * @cmp: pointer to a function
 * Return: First element index, on success or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);

	}
	return (-1);
}
