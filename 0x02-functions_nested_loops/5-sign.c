#include "main.h"

/**
 * print_sign - prints a sign for a number
 *
 * @n: the character to be checked
 *
 * Return: Returns a value after the character has been checked
 */
int print_sign(int n)
{
	int check;

	if (n > 0)
	{
		check = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		check = 0;
		_putchar('0');
	}
	else
	{
		check = -1;
		_putchar('-');
	}
	return (check);
}

