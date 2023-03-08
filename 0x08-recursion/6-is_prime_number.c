#include "main.h"

int prime(int n, int counter);

/**
 * is_prime_number - tests if the integer is a prime number
 * @n: the integer
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - tests if n is prime recursively
 * @n: the number
 * @counter: iterator
 *
 * Return: 0 or 1
 */

int prime(int n, int counter)
{
	if (counter == 1)
		return (1);
	if (n % counter == 0 && counter > 0)
		return (0);
	return (prime(n, counter - 1));
}
