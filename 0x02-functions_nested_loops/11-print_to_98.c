#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - This prints all the numbers to 98.
 * @n: this is the number passed.
 * Return: always 0.
 */
void print_to_98(int n)
{
	if ( n <= 98)
	{
	while ( n <= 98)
	{
		printf("%d", n);
		printf(" ");
		printf("\n");
		n++;
	}
	}
	else
	{
		printf("number above expectation");
	}
}


