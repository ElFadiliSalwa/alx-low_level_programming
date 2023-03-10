#include <stdio.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int
 */

int main(int argc, char *argv [])
{
	int n, sum = 0, i;

	if (argc <= 1)
		printf("0\n");
	if (isdigit(n) != 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; argv[i]; i++)
		sum += n;
	printf("%d\n", sum);
	return (0);
}
