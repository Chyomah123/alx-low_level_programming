#include "main.h"
/**
 * is_palindrome - checks if a string is a plaindrome
 * @s: pointer to string
 * Return: 1 if string is palindrome else 0
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len == 0 || *s != s[len - 1])
		return (0);
	return (is_palindrome_rec(s, 0, len - 1));
}

/**
 * palindrome - Entry point
 * Desc: palindrome
 * @s: char type
 * @i: int type
 * @j: int type
 * Return: Recursion
 */
int is_palindrome_rec(char *s, int i, int j)
{
	if (i == j)
		return (1);
	if (i == j - 1)
		return (s[i] == s[j]);
	if (s[i] != s[j])
		return (0);
	return (is_palindrome_rec(s, i + 1, j - 1));
}
/**
 * _strlen_recursion - finds the length of a string
 * @s: string
 * Return: The length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
