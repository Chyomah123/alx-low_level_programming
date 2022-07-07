#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: the number to be examined
 *
 * Return: Returns the last digits of the number
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
	{
		_putchar(-m + 48);
		return (-m);
	}
	else
	{
		_putchar(m + 48);
		return (m);
	}
}
