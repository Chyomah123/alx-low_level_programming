#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string 
 * of any of the bytes in the string accept
 * @s: The string to be checked against
 * @accept: The string to be checked
 * Return: A pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0' && s[i] != accept[i]; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}	
