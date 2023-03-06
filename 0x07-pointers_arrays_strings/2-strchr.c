#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: s or returns null.
 */
char *_strchr(char *s, char c)
{
	int i;
	for (i = 0; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
	return (s + i);
	}
	return (Null);
	
}
