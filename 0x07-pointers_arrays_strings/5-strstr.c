#include "main.h"
/**
 * _strstr - finds the first occurrence of a substring in a string
 * @haystack: The string to be compared with
 * @needle: The substring
 * Return:  pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;


	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*n == *h)
			{
				h++;
				n++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
