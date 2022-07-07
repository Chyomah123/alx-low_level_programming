#include "main.h"
/**
 * _isupper - checks for an uppercase character
 * @c: the character to be checked
 * Return: the value for the checked character (0, 1)
 */
int _isupper(int c)
{ 
	int b;

	if (c >= 65 && c <= 90)
	{
		b = 1;
	}
	else
	{
		b = 0;
	}
	return (b);
}
