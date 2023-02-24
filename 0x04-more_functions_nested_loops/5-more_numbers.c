#include "main.h"

/**
 * more_numbers - This will check more numbers the code
 * @n: This is the first digit.
 * @x: This is the second digit.
 * Return: gets numbers from 0 to 14 .
 */

void more_numbers(void)
{
	int n = 0;

	for (; n <= 10; n++)
	{
	int x;

	for (x = 0; x <= 14; x++)
	{
	_putchar(x + '0');
	}
	_putchar('\n');
	}
}
	
