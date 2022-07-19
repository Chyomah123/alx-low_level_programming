#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s:The string to be compared to
 * @accept: The substring
 * Return: The number of bytes in the initial segment of s
 * which consists only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int k;

	k = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++);
		if (s[i] == accept[j])
			k++;
		if (accept[j] == '\0')
			return (k);
		}
	return (k);
}
