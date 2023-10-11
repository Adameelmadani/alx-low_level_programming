#include <stdio.h>
#include "search_algos.h"


/**
 * rec_b - recursive function for binary search
 * @array: pointer to array
 * @low: low value
 * @high: high value
 * @value: value to search for
 * Return: index of value in array or -1 if not found
 */
int rec_b(int *array, size_t low, size_t high, int value)
{
	size_t i;
	size_t mid = low + (high - low) / 2;

	printf("Searching in array: ");
	for (i = low; i < high; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[high]);
	if (low == high && array[low] != value)
		return (-1);
	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (rec_b(array, low, mid - 1, value));
	return (rec_b(array, mid + 1, high, value));
}


/**
 * binary_search - binary_search algorithm
 * @array: pointer to array
 * @size: size of array
 * @value: value to search for
 * Return: index of value in array or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (rec_b(array, 0, size - 1, value));
}
