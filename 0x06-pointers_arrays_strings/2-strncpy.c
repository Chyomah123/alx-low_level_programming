#include "main.h"
/**
 * _strncpy - copies a string into another string
 * @dest: A pointer to a string to be copied into
 * @src: A pointer to a string to be copied from
 * @n: The number of bytes to be copied
 * Return: Returns the value of the string pointed to by dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
