#include "main.h"
/**
 * _puts - primts a string to stdout
 * @str: The string to be printed out
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

