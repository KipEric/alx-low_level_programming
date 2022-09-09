#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 *
 *  main - Prints if number is positive, zero or negative
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX /2;
	if (n > 0) 
	{
		printf ("the value of %d is positive\n", n);
	}
	else if (n == 0)
	{
		printf(" the value of %d is zero\n", n);
	}
	else
	{
		printf(" the value of %d is negative\n", n);
	}
	return (0);
}
