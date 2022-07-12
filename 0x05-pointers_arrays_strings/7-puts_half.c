#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int len;
	int i;
	int n;
	int j;

        for (i = 0; *(str + i) != '\0'; i++)
	{

	}
	len = i - 1;
	j = len / 2;
	if (j % 2 == 0)
	{
		while (j < len)
		{
			j = j + 1;
			_putchar(*(str + j));
		}
	}
	else
	{
		++j;
		n = (len) / 2;
		i = 0;
		while (j < n)
		{       _putchar(*(str + j));
			j++;
		}
	}
	_putchar('\n');
}
