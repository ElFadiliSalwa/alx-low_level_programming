#include<stdio.h>
/**
* main - Entry point
*
* Return: always 0
*/
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 56; j++)
		{
			putchar(i);
			putchar(j);
			for (k = 48; k <= 57; k++)
			{
				for (l = 49; l <= 57; l++)
				{
					putchar(k);
					putchar(l);
					if(i == 57 && j == 56 && k == 57 && l == 57)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
