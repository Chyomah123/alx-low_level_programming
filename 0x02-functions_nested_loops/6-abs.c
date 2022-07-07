#include "main.h"
/**
 *  _abs - returns the absolute value of any number
 *  @n: the number to be checked
 *
 *  Return: Returns the absolute value of the number
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
