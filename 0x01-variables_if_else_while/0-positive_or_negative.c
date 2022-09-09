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
		printf("%d is %s\n", n, "positive");
	}
	else if (n == 0)
	{
		printf("%d is %s\n", n, "zero");
	}
	else
	{
		printf("%d is %s\n", n, "negative");
	}
	return (0);
}
