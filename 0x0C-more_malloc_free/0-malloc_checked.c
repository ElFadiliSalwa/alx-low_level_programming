#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size of memory to be allocated
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
