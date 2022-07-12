#include "main.h"
#include <stdio.h>
/**
 * print_array - prints a number of chracters in an array
 * @a: The array
 * @n: Number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;
	int len;
	int m;

	for (i = 0; *(a + i) != '\0'; i++)
	{

	}
	len = i - 1;

	if (n <= len)
	{
		i = 0;
		while (i < n - 1)
		{
			m = *(a + i);
			printf("%d, ", m);
			i++;
		}
		n = n - 1;
		printf("%d\n", a[n]);
	}
	else if (n == 0 || len < n)
	{
		printf("\n");
	}
}
