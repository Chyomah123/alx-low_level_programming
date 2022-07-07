#include "main.h"
/**
 * print_square - prints a square based on the number inputted
 * @size: the size of the square in digits
 *
 */
void print_square(int size)
{
	char c;
	int i;
	int j;

	c = '#';
	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(c);
		}
	}
}
