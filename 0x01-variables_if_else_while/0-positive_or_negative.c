#include <stdlib.h>
#include <time.h>
/**
 * main - entry file
 *
 * Description: 'determine if number is a positive or negative'
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d possitive\n"n);
	)
	else
	{
		if (n == 0)
		{
			printf("%d zero\n"n);
		}
		else
		{
			print ("%d is negative\n"n);
		}
	}
	return (0);
}
