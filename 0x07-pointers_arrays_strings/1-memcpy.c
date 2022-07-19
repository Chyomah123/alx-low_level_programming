#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: Memory area to be copied to
 * @src: Memory area to be copied from
 * @n: The number of bytes of memory area to be copie
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
