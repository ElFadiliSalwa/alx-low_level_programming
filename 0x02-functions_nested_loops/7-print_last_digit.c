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
	_putchar(n % 10);
	return (n % 10);
}
