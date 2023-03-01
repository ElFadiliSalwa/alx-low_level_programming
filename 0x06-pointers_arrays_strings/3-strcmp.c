#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, dif;

        while (i <= strlen(s1) && j <= strlen(s2))
        {
            if (s1[i] == s2[j])
            {
                i++;
                j++;
                dif = 0;
            }
            else
            {
                dif = s1[i] - s2[j];
                break;
            }
        }
        return dif;
}
