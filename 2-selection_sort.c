#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using
 * Selection Sort algorithm
 * @array: is the array to be sorted
 * @size: size of the array to be sorted
 */
void selection_sort(int *array, size_t size)
{
	int l_num, temp1, temp2, new_flag = 0;
	size_t i, j;

	if (size <= 0)
		return;

	for (i = 0; i < size; i++)
	{
		l_num = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < l_num)
			{
				/*New least number saved*/
				l_num = array[j];
				temp1 = j;/*Save the index of the least number*/
				new_flag = 1;
			}
		}
		if (j == size && new_flag == 1)
		{
			/*Swap with current number*/
			temp2 = array[i];
			array[i] = l_num;
			array[temp1] = temp2;

			new_flag = 0;
			print_array(array, size);
		}
	}
}
