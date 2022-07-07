#include "main.h"

/**
 * _islower - checks for lowercase letters
 * @c: character to be checked 
 *
 * Return: Returns the value of check
 *
 */

int _islower(int c)

{
	int check;

	if (c >= 97 && c <= 122)
                check = 1;
	else if (c >= 65 && c <= 90)
		check = 0;
	else
          	check = 0;
        return (check);

}
