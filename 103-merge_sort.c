#include "sort.h"

/**
 * print_sub_arr - print a sub array from lower to upper bounds
 *
 * @array: the array to print
 * @lb: lower bound
 * @ub: upper bound
 * @positon: the message to print
 *
 * Return: nothing
 */
void print_sub_arr(int *array, int lb, int ub, char *positon)
{
	int i;

	printf("[%s]: ", positon);
	for (i = lb; i <= ub; i++)
	{
		printf("%d", array[i]);
		if (i != ub)
			printf(", ");
	}
	printf("\n");

}
/**
* mergeSort - helper function that runs recursively to perform
* merge sort
* @A: array to be sorted
* @lb: lower bound of the array
* @ub: upper bound of the array
* @size: size of the array
*/
void mergeSort(int *A, int lb, int ub, int size)
{
	int mid;

	if (lb < ub)
	{
		mid = (lb + ub + 1) / 2;

		mergeSort(A, lb, mid - 1, size);
		mergeSort(A, mid, ub, size);
		merge(A, lb, mid, ub);
	}
}

/**
* merge - merges all sub arrays in a sorted manner
* merge sort
* @array: array to be sorted
* @lb: lower bound of the array
* @mid: mid element position
* @ub: upper bound of the array
*/
void merge(int *array, int lb, int mid, int ub)
{
	int i = lb, j = mid, k = 0, size_s = ub - lb + 1, *sorted;

	sorted = malloc(sizeof(int) * size_s);
	if (sorted == NULL)
		return;
	printf("Merging...\n");
	print_sub_arr(array, lb, mid - 1, "left");
	print_sub_arr(array, mid, ub, "right");
	while (i < mid && j <= ub)/*Merge sub arrays*/
	{
		if (array[i] <= array[j])
		{
			sorted[k] = array[i];
			i++, k++;
		}
		else
		{
			sorted[k] = array[j];
			j++, k++;
		}
	}
	if (i > mid - 1)/*Case where left sub array is fully ran*/
	{
		while (j <= ub)
		{
			sorted[k] = array[j];
			j++, k++;
		}
	}
	else
	{
		while (i <= mid - 1)
		{
			sorted[k] = array[i];
			i++, k++;
		}
	}
	for (k = 0; k < size_s; k++)
		array[k + lb] = sorted[k];
	free(sorted), sorted = NULL;
}

/**
* merge_sort - sorts an array of integers in ascending order using
* Merge Sort algorithm
* @array: array to be sorted
* @size: size of the array
*/
void merge_sort(int *array, size_t size)
{
	int lb, ub;

	if (size <= 1)
		return;
	lb = 0, ub = (int)size - 1;
	mergeSort(array, lb, ub, (int)size);
	printf("[Done]: ");
	print_array(array, size);
}
