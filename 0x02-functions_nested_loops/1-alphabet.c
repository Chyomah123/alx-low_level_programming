#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 */
void print_alphabet(void)
{
	char j;

	j = 'a';

	while (j >= 'a' && j <= 'z')
	{
	
		_putchar(j);
		j++;
	}
	_putchar('\n');
}
