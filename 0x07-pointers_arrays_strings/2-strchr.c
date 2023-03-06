#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value,check;

	value = 0;
	for (i = 0; s[i] >= '\0'; i++)
	{
		check =0;

		for (n = 0; accenpt[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				check = 1;
			}
		}
	}
}
