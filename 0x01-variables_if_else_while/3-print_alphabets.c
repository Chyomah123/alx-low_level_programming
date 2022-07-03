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
	char alphabets;
	char A;

	alphabets = 'a';
	A = 'A';

	while (alphabets >= 'a' && alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}
	while (A >= 'A' && A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
