#include "main.h"

/**
 * print_alphabet_x10 - print code.
 *
 * Return:void.
 */
void print_alphabet_x10(void)
{
	char c = 0;
	char n;

	while (c <= 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
		_putchar (n);
		}
		_putchar ('\n');
		c++;
	}
}
