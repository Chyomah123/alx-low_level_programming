#include "main.h"
/**
 * _strlen - counts the length of a string
 * @s: the pointer to the variable to be counted
 * Return: return the length of the string
 */
int _strlen(char *s)
{
	int i;
	int sum = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		sum += 1;
	}
	return (sum);
}
