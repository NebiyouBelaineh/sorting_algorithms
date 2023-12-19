#include "sort.h"
void heapify(int *array, int n, int index, int size);

/**
 * heapify - creates a max heap representation of an array
 * @array: array to be represented as a max heap
 * @n: range to be checked
 * @index: index being checked
 * @size: size of the entire array
 */
void heapify(int *array, int n, int index, int size)
{
	int left, right, max, tmp;

	left = 2 * index + 1;
	right = 2 * index + 2;
	max = index;

	if (left < n && array[left] > array[max])
		max = left;
	if (right < n && array[right] > array[max])
		max = right;
	if (index != max)
	{
		tmp = array[index];
		array[index] = array[max];
		array[max] = tmp;
		print_array(array, size);
		heapify(array, n, max, size);
	}
}

/**
 * heap_sort - sorts an array of integers in ascedning order using
 * using Heap Sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void heap_sort(int *array, size_t size)
{
	int start, i, n, tmp;

	if (size <= 1)
		return;

	start = (int)size / 2 + 1;
	for (i = start; i >= 0; i--)
	{
		heapify(array, (int)size, i, (int)size);
	}
	for (n = (int)size - 1; n >= 0; n--)
	{
		if (n != 0)
		{
			tmp = array[n];
			array[n] = array[0];
			array[0] = tmp;
			print_array(array, size);
			heapify(array, n, 0, (int)size);
		}
	}
}
