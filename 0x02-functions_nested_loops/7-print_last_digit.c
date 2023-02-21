#include "main.h"
#include<limits.h>
#include<stdlib.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to print its last digit
 *
 * Return: int
 */
int print_last_digit(int n)
{
	n %= 10;
	n = abs(n);
	_putchar(n + '0');
	return (n);
}
