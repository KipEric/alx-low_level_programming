#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main: Last digit
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n;
	char last[] = "Last digit of";

	srand(time(0));
	n =rand() - RAND_MAX / 2;
	printf("%s %d is %d and is\n", last, n, n % 10);
	if (n % 10 > 5)
		printf("> 5\n");
	else if (n % 10 == 0)
		printf("0\n");
	else
		printf("> 6 and ! 0\n");
	return (0);
}
