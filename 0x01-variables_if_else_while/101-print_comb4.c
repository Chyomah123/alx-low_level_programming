#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry poin
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;
	int o;
	int p;

	n = '0';

	while (n < '9')
	{
		for (o = '1'; 0 < '9'; o++)
		{
			for (p = '1'; p <= '9'; p++)
			{
				if (o != n && o != p)
				{
					putchar(n);
					putchar(o);
					putchar(p);
				
				}
				putchar(',');
				putchar(' ');
			}
		}
		n++;
	}
	putchar('\n');
	return (0);
}

