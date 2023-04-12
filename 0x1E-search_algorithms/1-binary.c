#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is locate
 * or -1 if not found or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	int left = 0;
	int right = size - 1;
	int mid;

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in subarray: ");
		for (int i = left; i <= right; i++)
			printf("%d ", array[i]);
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}
