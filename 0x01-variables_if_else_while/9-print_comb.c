#include<stdio.h>
/**
* main - Entry point
*
* Return: always 0
*/
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 57)
			continue;
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
