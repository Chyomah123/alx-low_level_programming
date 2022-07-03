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

	n = 0;
	while (n >= 0 && n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
