#include <stdio.h>
#include <stdlib.h>
/**
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;
	int m;

	n = '0';

	while (n < '9')
	{
		for (m = '1'; m <= '9'; m++)
		{
			if (m != n)
			{
				putchar(n);
				putchar(m);
				putchar(',');
				putchar(' ');
			}
		}
		n++;
	}
	putchar('\n');
	return (0);
}

