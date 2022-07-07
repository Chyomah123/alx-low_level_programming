#include "main.h"
/**
 * print_triangle - prints a triangle based on the size specified
 * @size: the size of the triangle in digits
 */
void print_triangle(int size)
{
	int k;
	int j;
	int i;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
			for (j = size - i; j > 1; j--)
				_putchar(' ');
			for (k = i + j; k >= 1; k--)
				_putchar('#');
			_putchar('\n');
	}
}
