#include "main.h"
/**
 * _is alpha - Checks for alpabetical character
 * @c: the value.
 * Return: 1 for alphabet 0 for everything else.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c >= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
