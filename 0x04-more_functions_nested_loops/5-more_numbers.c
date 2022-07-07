#include "main.h"
/**
 * more_numbers - prints 0-14 ten times
 */
void more_numbers(void)
{
	int t;
	int i;

	for (t = 0; t <= 9; t++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
