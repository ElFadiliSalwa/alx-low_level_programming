#include "main.h"
#include<stdlib.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to print its last digit
 *
 * Return: int
 */
int print_last_digit(int n)
{
	n = abs(n);
	n %= 10;
	_putchar(n + '0');
	return (n);
}
