#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: Always 0
 */
int main(void)
{
	char *s = __BASE_FILE__;

	printf("%s\n", s);
	return (0);
}
