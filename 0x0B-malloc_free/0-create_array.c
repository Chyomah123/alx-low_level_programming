#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * create_array - creates an array of characters with unsigned int size
 * @size: The size of the array
 * @c: The character to be filled in the array
 * Return: Pointer to a character
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);
	for (b = 0; b < size; b++)

		a[b] = c;

	return (a);
}
