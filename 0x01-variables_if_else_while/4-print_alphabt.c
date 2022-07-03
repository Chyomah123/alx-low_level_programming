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
	char a;

	a = 'a';
	while (a >= 'a' && a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			putchar (a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
