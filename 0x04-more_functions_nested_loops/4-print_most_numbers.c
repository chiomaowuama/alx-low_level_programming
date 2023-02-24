#include "main.h"

/**
 * print_most_numbers- check the code
 * @y: this is the digit we wil be using.
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int y
	
	for (y = 0; y <= 9; y++)
	{
	if (y == 2 || y == 4)
	{
	continue;
	}
	else
	{
	_putchar(y + '0');
	}
	}
	_putchar('\n');
}

