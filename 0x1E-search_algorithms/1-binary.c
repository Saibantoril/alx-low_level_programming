#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1 if not found or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	size_t left = 0, right = size - 1, mid;

	while (left < right)
	{
		mid = (left + right) / 2;

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid;
	}

	if (array[left] == value)
		return (left);

	return (-1);
}
