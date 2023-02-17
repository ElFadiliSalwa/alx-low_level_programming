#include<stdio.h>
/**
* main - Entry point
*
* Return: always 0
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		while (c != 'e' && c!= 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
