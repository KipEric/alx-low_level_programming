#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - returns pointer to appropriate calculation function
 *
 * @s: string containing operation symbol
 *
 * Return: pointer to function if successful, or NULL if fails
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - ...
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - ...
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - ...
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - ...
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
