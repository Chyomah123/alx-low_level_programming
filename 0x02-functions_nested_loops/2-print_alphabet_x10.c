#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet a-z 10 times
 *
 */

void print_alphabet_x10(void)
{
	char a;
        int i;

	a = 'a';
	i = '0';

	while (i >= '0' && i <= '9')
	{
           	a = 'a';
		while (a >= 'a' && a <= 'z')
		{
			_putchar(a);
			a++;
		}
		i++;
		_putchar('\n');
	}
}
