#include "search_algos.h"
#include <stddef.h>
/**
 * linear_search - Searches for a value in an array of integers using the
 *                 linear search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if value is not
 *         present in the array or if array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
    if (array == NULL)
    {
        return (-1);
    }

    for (size_t i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            return ((int) i);
        }
    }

    return (-1);
}
