#include "main.h"
/**
 * puts2 - prints every other character in a string
 * str: the string inputted
 */
void puts2(char *str)
{
	int i;
	char p;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
		 	p = *(str + i);
			_putchar(p);
		}
		i++;
	}
	_putchar('\n');
}
