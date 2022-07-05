#include "main.h"
/**
 * print_alphabet - writes the alphabets in lowercase
 * main - Printing the letters of the alphabet
 *
 * _putchar: A function that writes a character to stdout
 *
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char i;

	i = 'a';

	while (i >= 'a' && i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
