#include <stdio.h>
#include "main.h"
/**
 * main - Defining a function that prints "-putchar" to the terminal
 * _putchar - A function that writes the character c to stdout
 *
 * @c: The character to be printed
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c);
int main(void)
{
	char myText = '_';

	_putchar(myText);
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
