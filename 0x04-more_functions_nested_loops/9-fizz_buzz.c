#include<stdio.h>

/**
 * main - prints number from 1 to 100 (Fizz for multiplies of 3, Buzz for multiplies of 5, FizzBuzz for both)
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
