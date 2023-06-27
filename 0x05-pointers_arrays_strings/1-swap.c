#include "main.h"

/**
*
*
*
*
*/

void swap_int(int *a, int *b)
{
	int *aux;

	*aux = a;
	*b = a;
	*a = b;

	return;
}
