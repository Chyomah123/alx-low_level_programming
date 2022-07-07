#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: the character to be checked
 *
 * Return: returns a value
 */
int _isdigit(int c)
{
	int b;

	if (c >= 48 && c <= 57)
	{
		b = 1;
	}
	else
	{
		b = 0;
	}
	return (b);
}
