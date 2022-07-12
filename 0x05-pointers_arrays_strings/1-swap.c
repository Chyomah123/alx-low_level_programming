#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 * @a: An integer whose value is to be swapped
 * @b: another integer whose value is to be swapped
 */
void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
