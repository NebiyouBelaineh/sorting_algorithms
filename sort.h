#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
* struct listint_s - Doubly linked list node
*
* @n: Integer stored in the node
* @prev: Pointer to the previous element of the list
* @next: Pointer to the next element of the list
*/
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void mergeSort(int *A, int lb, int ub, int size);
void merge(int *A, int lb, int mid, int ub);
void print_sub_arr(int *array, int lb, int ub, char *message);
void swap(listint_t *node1, listint_t *node2);
void heap_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void print_sub_bitonic(int *array, int lb, int mid, int direction,
size_t size);
void radix_sort(int *array, size_t size);
void counting_sort_rad(int *array, size_t size, int sd);
void quick_sort_hoare(int *array, size_t size);

#endif /*SORT_H*/
