#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - allocates space in the memory to concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: The number of bytes from s2 toconcatenate
 * Return: A pointer to the newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = j = k = 0;
	while (s1[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * (i + 1 + n));
        if (ptr == NULL)
		return (NULL);

	while (s1[j] != '\0')
	{
		ptr[j] = s1[j];
		j++;
	}

	looo





