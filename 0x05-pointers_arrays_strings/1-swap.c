#include "main.h"

/**
 * swap_int - Swap the values of two integers
 * @a: Pointer to integer 1.
 * @b: Pointer to integer 2.
 */

void swap_int(int *a, int *b)
{
	int *aux;

	aux = *a;
	*a = *b;
	*b = aux;
	return;
}
