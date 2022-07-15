#include "main.h"
/**
 * _strncat - concatenates two strings with n number of bytes specified
 * @dest: a pointer to a string
 * @src: a pointer to a string to be concatenated to dest
 * @n: number of bytes specified
 * Return: Returns the value of the string pointed to by dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
