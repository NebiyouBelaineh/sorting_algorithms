#include "sort.h"

/**
* counting_sort - sorts an array of integers in ascending
* order using the Counting sort algorithm
* @array: array to be sorted
* @size: size of the array
*/
void counting_sort(int *array, size_t size)
{
	int k = array[0], i, *b, *count;

	if (array == NULL || size < 2)
		return;

	for (i = 1; i < (int)size; i++)
		if (k < array[i])
			k = array[i];

	count = malloc(sizeof(int) * (k + 1));
	if (count == NULL)
		return;

	for (i = 0; i <= k; i++)
		count[i] = 0;

	for (i = 0; i < (int)size; i++)
		++count[array[i]];

	for (i = 1; i <= k; i++)
		count[i] += count[i - 1];
	print_array(count, k + 1);

	b = malloc(sizeof(int) * (int)size);
	if (b == NULL)
	{
		free(count), count = NULL;
		return;
	}

	for (i = (int)size - 1; i >= 0; i--)
		b[--count[array[i]]] = array[i];

	for (i = 0; i < (int)size; i++)
		array[i] = b[i];

	free(b), b = NULL;
	free(count), count = NULL;
}
