#include "main.h"

/**
* print_most_numbers - print the number from 0 to 9
*		       but don't print 2 and 4
* Return: void
*/

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		/* ASCII 50 ->  Number 2 .... 54 -> 4 */
		if (!(i == 50 || i == 54))
			_putchar(i);
	}
	_putchar('\n');
}
