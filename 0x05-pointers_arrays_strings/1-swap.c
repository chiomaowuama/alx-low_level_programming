#include "main.h"
/**
 * swap_int- check the code
 * @a: The first digit.
 * @b: The second digit.
 * @temp: The temporary digit.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}

