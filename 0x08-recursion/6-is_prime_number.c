#include "main.h"
/*
 * is_prime_number -  Returns the natural square root of a number.
 * @n: int type
 * Return: char type
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (_prime_number(2, n));
}
/**
 * _prime_number - checks to see if number is prime
 * @i: check
 * @j: integer
 *
 * Return: 1 if prime, 0 if not.
 */
int _prime_number(int i, int j)
{
	if (j < 2 || j % i == 0)
		return (0);
	if (i > j / 2)
		return (1);
	else
	return (_prime_number(i + 1, j));
}
