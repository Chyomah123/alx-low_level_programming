#include "main.h"
/**
 * print_diagonal - prints \ for the number of times specified
 * @n: the number to be specified
 */
void print_diagonal(int n)
{
	int i;
	char c;
	char d;
	int j;

	c = '\\';
	d = ' ';

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				_putchar(c);
			}
			else
			{
				_putchar(d);
			}
		}
		_putchar('\n');
	}
}

