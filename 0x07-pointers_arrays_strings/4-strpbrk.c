#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - check the code
 * @s: the digit
 * @accept: input
 * Return: Always 0(Success).
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; n++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (NULL);
}
