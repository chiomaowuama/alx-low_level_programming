#include "main.h"

/**
 * _pow_recursion - math power of number
 * @x: the number
 * @y: the power value
 *
 * Return: int
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
