#include "main.h"
/**
 * _strlen_recursion - Prints the length
 * @s: The string to be counted
 * Return: Returns the length of the string
 */
int _strlen_recursion(char *s)
{
	int n;

	n = 0;
	if (s[n] == '\0')
	{
		return (0);
	}
	else
	{
		n++;
		return (n + _strlen_recursion(s + 1));
	}
}
