#include "main.h"

/**
* print_sign - print the sign of a number
* @n: is the number to be verified
* Return: 1 and + if is greater than 0, and
*         -1 if is less than 0, and zero is
*         equal to 0.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
}
