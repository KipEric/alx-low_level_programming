#include "search_algos.h"

/**
 * linear_search - Search for value in an array.
 *
 * Description: Script to search for a value uding linear algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: value to be search for
 *
 * Return: -1 if array is null othersiwise return the value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%zu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
