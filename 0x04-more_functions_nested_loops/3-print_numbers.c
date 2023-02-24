#include "main.h"

/**
 * print_numbers - check the code
 * @c: this i the digit to be used .
 * Return: print numbers from 0 to 9
 */
void print_numbers(void)
{
	int x;
	
	for (x =0; x <= 9; x++)
	{
	_putchar(x + '0');
	}
	_putchar('\n');
}
