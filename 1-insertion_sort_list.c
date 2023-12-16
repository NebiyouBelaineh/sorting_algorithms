#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using insertion sort algorithm
 * @list: doubly linked listint_t list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *back;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		back = current->prev;

		while (back != NULL && back->n > current->n)
		{
			/**
			 * Swap 'back' and 'current' node if previous number
			 * is greater than 'current'
			*/
			if (back->prev != NULL)
				back->prev->next = current;

			if (current->next != NULL)
				current->next->prev = back;

			back->next = current->next;
			current->prev = back->prev;

			back->prev = current;
			current->next = back;

			if (current->prev == NULL)/*Head is updated if swapped*/
				*list = current;
			else
				current->prev->next = current;
			if (back->next != NULL)
				back->next->prev = back;

			print_list(*list);
			back = current->prev;
		}
		current = current->next;
	}
}
