#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - function executes a function on array
 * @array: Pointer to array
 * @size: number of elements in array
 * @action: pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
