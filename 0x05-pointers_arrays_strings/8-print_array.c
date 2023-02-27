#include "main.h"
#include "2-strlen.c"

/**
 * print_array - prints n elements of an array of integers
 * @a: the array of integer
 * @n: the number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < _strlen(a); i++)
	{
		if (i != _strlen(a))
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
