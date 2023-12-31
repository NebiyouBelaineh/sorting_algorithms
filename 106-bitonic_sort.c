#include "sort.h"
void bitonicSort(int *array, int lb, int mid, int direction, size_t size);
void bitonicMerge(int *array, int lb, int count, int direction);
void print_sub_bitonic(int *array, int lb, int mid, int direction,
					   size_t size);

/**
 * bitonic_sort - sorts an array of integers in ascending order using
 * Bitonic sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void bitonic_sort(int *array, size_t size)
{
	int mid, direction = 1;

	if (array == NULL || size <= 1)
		return;

	mid = size;

	bitonicSort(array, 0, mid, direction, size);
}
/**
 * bitonicSort - runs biotonic sort algorithm recursively
 * to breakdown the array into sub arrays and merge the
 * elements into a sorted array
 * @array: array to be sorted
 * @lb: lower bound of the array sub array
 * @mid: mid point of the sub array
 * @direction: specifies if the array is to be sorted in ascending or
 * descending order
 * @size: size of the entire array
 */
void bitonicSort(int *array, int lb, int mid, int direction, size_t size)
{
	int k;
	char *dxn;

	if (mid > 1)
	{
		k = mid / 2;

		if (direction)
			dxn = "UP";
		else
			dxn = "DOWN";
		/*Print what you are merging*/
		printf("Merging [%d/%ld] (%s):\n", mid, size, dxn);
		print_array(array + lb, mid); /*Print from lower bound to sub array bound*/

		bitonicSort(array, lb, k, 1, size);
		bitonicSort(array, (lb + k), k, 0, size);
		bitonicMerge(array, lb, mid, direction);
		/*Print result after each merge*/
		printf("Result [%d/%ld] (%s):\n", mid, size, dxn);
		print_array(array + lb, mid);
	}
}

/**
 * bitonicMerge - merges the sub arrays based on the sorting
 * direction
 * @array: array to be sorted
 * @lb: lower bound of the array
 * @count: highest index of the sub array
 * @direction: specifies if the array is to be sorted in ascending or
 * descending order
 */
void bitonicMerge(int *array, int lb, int count, int direction)
{
	int k, i, tmp;

	if (count > 1)
	{
		k = count / 2;

		for (i = lb; i < (lb + k); i++)
		{
			/*Swap is done */
			if (direction == (array[i] > array[i + k]))
			{
				/*Swap*/
				tmp = array[i];
				array[i] = array[i + k];
				array[i + k] = tmp;
			}
		}
		bitonicMerge(array, lb, k, direction);
		bitonicMerge(array, (lb + k), k, direction);
	}
}
