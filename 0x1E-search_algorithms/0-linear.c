#include search_algos.h

/**
 * linear_search -searches for value in an array of integers using linear search.
 * @array: A pointer to the first element of the array to search
 * @size: The number of element in the array.
 * @value: The value to search for.
 *
 * Return: -1 if value is absent otherwise the first index where the value is located.
 *
 * Description: Print a value every time it is compared in the array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printd("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1)
}
