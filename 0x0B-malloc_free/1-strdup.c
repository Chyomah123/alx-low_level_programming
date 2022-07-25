#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer which contains a duplicate of
 * Desc: _strdup function
 * @str: char type
 * Return: A pointer to a string
 */
char *_strdup(char *str)
{
	char *c;
	int i, j;

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{	
		i++;
	}
		c = malloc(sizeof(*str) * (i + 1));
		if (c == NULL)
		{
			return (NULL);
		}
		j = 0;
		while (str[j] != '\0')
		{
			c[j] = str[j];
			j++;
		}
		return (c);
}
