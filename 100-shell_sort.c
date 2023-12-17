#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order using
 * Shell Sort algorithm with Knuth Sequence
 * @array: array to be sorted
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	int i, k, temp;
	size_t gap = 1, j;

	if (size <= 1)
		return;

	while (gap <= size / 3)
	{
		gap = gap * 3 + 1;
	}
	/* printf("Gap initial value: %ld\n\n", gap); */
	for (k = gap; k >= 1; k = k / 3)
	{
		/* printf("\nGap current value: %d\n", k); */
		for (j = k; j < size; j++)
		{
			for (i = (j - k); i >= 0; i = i - k)
			{/*else: swap values*/
				if (array[i + k] < array[i])
				{
					temp = array[i + k];
					array[i + k] = array[i];
					array[i] = temp;
				}
				else
					break;
			}
		}
		print_array(array, size);
	}
}
