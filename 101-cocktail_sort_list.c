#include "sort.h"

/**
* cocktail_sort_list - sorts a doubly linked list of integers in
* ascending order using the Cocktail Shaker Sort
* @list: doubly linked list to be sorted
*/
void cocktail_sort_list(listint_t **list)
{
	listint_t *current, *first, *last = NULL;
	int swapped;

	if (list == NULL || *list == NULL)
		return;

	first = *list;

	do {
		swapped = 0;
		current = first;
		while (current && current->next != last) /*Forward sweep*/
		{
			if (current->n > current->next->n)
			{
				swap(current, current->next);
				swapped = 1;
				print_list(*list);
			}
			current = current->next;
		}
		if (swapped == 0)
			break;

		swapped = 0;
		last = current;
		/*Backward sweep*/
		while (current && current != first)
		{
			if (current->n < current->prev->n)
			{
				swap(current, current->prev);
				swapped = 1;
				print_list(*list);
			}
			current = current->prev;
		}
		first = current;
	} while (swapped);
}

/**
* swap - swaps two nodes in a doubly linked list
* @node1: node to be swapped
* @node2: node to be swapped
*/
void swap(listint_t *node1, listint_t *node2)
{
	int tmp, *ptr;

	tmp = node1->n;
	ptr = (int *)&node1->n;
	*ptr = node2->n;
	ptr = (int *)&(node2->n);
	*ptr = tmp;
}
