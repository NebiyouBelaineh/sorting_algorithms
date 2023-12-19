#include "sort.h"
int partition(int *array, int lo, int hi, size_t size);
void quicksort_hoare(int *A, int lo, int hi, size_t size);

/**
 * quick_sort_hoare - sorts an array using Quick sort algorithm
 * with Hoare Partition Scheme
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (size <= 1)
		return;

	quicksort_hoare(array, 0, (size - 1), size);
}

/**
 * quicksort_hoare - sorts array using Lomuto partition scheme
 * @A: array to be sorted
 * @lo: lower bound of the array
 * @hi: higher bound of the array
 * @size: size of the entire array
 */
void quicksort_hoare(int *A, int lo, int hi, size_t size)
{
	int p;

	if (hi - lo > 0)
	{
		p = partition(A, lo, hi, size);

		quicksort_hoare(A, lo, p - 1, size);
		quicksort_hoare(A, p, hi, size);
	}
}

/**
 * partition - finds the pivot and divides an array into two partitions
 * with smaller elements on the left, larger elements on the right
 * @array: array to be divided
 * @lo: lower bound of the partition
 * @hi: upper bound of the partition
 * @size: size of the array
 *
 * Return: the pivot point to make the partition
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int i, j, pivot, temp;

	pivot = array[hi];
	i = lo - 1;
	j = hi + 1;

	for (; i < j;)
	{
		do {
			i = i + 1;
		} while (array[i] < pivot);
		do {
			j = j - 1;
		} while (array[j] > pivot);

		if (i < j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, size);
		}
	}
	return (i);
}
