#include "main.h"
/**
 * _memset - prints a constant byte for the first n bytes specified
 * @s: Starting address of memory to be filled
 * @b: Character to be filled
 * @n: The number of bytes to be filled
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (b != '\0' && i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
