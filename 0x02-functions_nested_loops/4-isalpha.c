#include "main.h"

/**
 * _isalpha - checks for an alphabetic character
 * 
 * @c: character to be checked
 *
 * Return: returns the value of check
 */
int _isalpha(int c)
{
	int check;

	if (c >= 97 && c <= 122)
		check = 1;
	else if (c >= 65 && c <= 90)
		check = 1;
	else
		check = 0;
	return (check);
}
