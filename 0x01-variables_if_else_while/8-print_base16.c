#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;
	char a;

	n = '0';
	a = 'a';

	while (n >= '0' && n <= '9')
	{
		putchar(n);
		n++;
	}
	while (a >= 'a' && a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
