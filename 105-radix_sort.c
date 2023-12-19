#include "sort.h"
void counting_sort_rad(int *array, size_t size, int sd);

/**
* radix_sort - sorts an array of integers in ascending order using
* the Radix Sort Algorithm starting from the LSD
* @array: Array to be sorted
* @size: size of array
*/
void radix_sort(int *array, size_t size)
{
	size_t i;
	int max, sd;

	if (array == NULL || size <= 1)
		return;
	max = array[0];
	for (i = 1; i < size; i++)
		if (array[i] > max)
			max = array[i];
	for (sd = 1; (max / sd) > 0; sd = (sd * 10))
	{
		counting_sort_rad(array, size, sd);
		print_array(array, size);
	}

}

/**
* counting_sort_rad - sorts an array of integers in ascending
* order using the Counting sort algorithm for radix sort
* @array: array to be sorted
* @size: size of the array
* @sd: significat digit
*/
void counting_sort_rad(int *array, size_t size, int sd)
{
	int i, *b, *count;

	count = malloc(sizeof(int) * 10);
	if (count == NULL)
		return;

	for (i = 0; i <= 9; i++)
		count[i] = 0;

	for (i = 0; i < (int)size; i++)
		++count[(array[i] / sd) % 10];

	for (i = 1; i <= 9; i++)
		count[i] += count[i - 1];

	b = malloc(sizeof(int) * (int)size);
	if (b == NULL)
	{
		free(count), count = NULL;
		return;
	}
	for (i = (int)size - 1; i >= 0; i--)
	{
		b[--count[(array[i] / sd) % 10]] = array[i];
	}
	for (i = 0; i < (int)size; i++)
		array[i] = b[i];

	free(b), b = NULL;
	free(count), count = NULL;
}
