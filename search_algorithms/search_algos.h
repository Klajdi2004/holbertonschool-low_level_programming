#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* helpers */
void print_array(int *array, size_t inc, size_t size);

/**
 * struct skiplist_s - Structure for a skip list node
 * @n: Integer value stored in the node
 * @index: Index of the node in the skip list
 * @next: Pointer to the next node
 * @express: Pointer to the next node at the express lane
 *
 * Description: This structure represents a node in a skip list.
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/**
 * struct listint_s - Structure for a linked list node
 * @n: Integer value stored in the node
 * @index: Index of the node in the linked list
 * @next: Pointer to the next node
 *
 * Description: This structure represents a node in a linked list.
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/* main functions */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
#endif
