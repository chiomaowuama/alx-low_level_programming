#include "main.h"

/**
 * rev_string - check the code
 * @s: the string to be modified.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int len = 0, index = 0;
	char tmp;

	while (s[index++])
	len++;
	
	for (index = len - 1; index >= len/2; index--)
	{
	tmp = s[index];
	s[index] = s[len - index - 1];
	s[len - index -1] = tmp;
	}
}
