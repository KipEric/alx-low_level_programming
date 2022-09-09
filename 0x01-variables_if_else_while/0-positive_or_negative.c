#include <stdio.h>
#include <time.h>
/**
 * main: Determin if a number is positive, zero or negative
 *
 * Return: 0 if success
 */
int main (void)
{
	int n;

	srand(time(0));
	n = rand () - RAND_MAX / 2;

	if (n < 0)
	{
		printf("The value of %d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("The value of %d is positive\n", n);
	}
	else
	{
		printf("The value of %d is zero\n", n);
	}
	return (0);
}
