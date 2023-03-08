#include "main.h"

int test_palindrome(char *s, int i, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - tests if a string is a palindrome
 * @s: the string
 *
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (test_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * test_palindrome - tests the palindrome
 * @s: the string
 * @i: iterator
 * @length: the length of the string
 *
 * Return: int
 */

int test_palindrome(char *s, int i, int length)
{
	if (s[i] != s[length - 1])
		return (0);
	if (i >= length)
		return (1);
	return (test_palindrome(s, i + 1, length - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s)
	{
		counter++;
		s++;
		counter += _strlen_recursion(s);
	}
	return (counter);
}
