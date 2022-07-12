#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int i;
	int j;
	char c;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++)
	{
		c = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = c;
		i--;
	}
}
