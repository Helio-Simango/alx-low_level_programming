#include "main.h"

/**
* print_alphabet_x10 - print alphabet in lowercase x 10
*/

void print_alphabet_x10(void)
{
	int letter;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (letter = 97; letter <= 122; letter++)
			_putchar(letter);
	}
	_putchar('\n');

}
