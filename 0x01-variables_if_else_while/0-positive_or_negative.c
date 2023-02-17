#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf(n, "%d is positive");
	else if (n == 0)
		printf(n, "%d is zero");
	else
		printf(n, "%d is negative");
	return (0);
}
