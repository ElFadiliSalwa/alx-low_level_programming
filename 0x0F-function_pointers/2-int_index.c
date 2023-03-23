#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: the size of the array
 * @cmp: pointer to function
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
