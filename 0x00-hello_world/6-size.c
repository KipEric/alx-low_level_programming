#include <stdio.h>

/**
 * main - prints the size of many variables
 *
 * return: 0 if successful
 */
int main (void)
{
	char a:
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char %d is \n", sizeof(a));
	printf("Size of an int %d is \n", sizeof(b));  
	printf("Size of a long int %d is \n", sizeof(c));  
	printf("Size of a long long int %d is \n", sizeof(d));  
	printf("Size of a float %d is \n", sizeof(e));
      return (0);
}      
