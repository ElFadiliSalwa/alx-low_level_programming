#include "main.h"

int _square_of_number(int n, int root);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_square_of_number(n, 0));
}

/**
 * _square_of_number - finds the natural
 * @n: the number
 * @root: iterator
 *
 * Return: int
 */

int _square_of_number(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (_square_of_number(n, root + 1));
}
