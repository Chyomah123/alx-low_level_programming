#include "main.h"
/**
 * print_line - prints a line a particular number of times
 * @n: the number of lines to be printed
 */
void print_line(int n)
{
	char c;
	int i;

        c = '_';
	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
