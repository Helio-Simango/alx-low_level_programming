#include "main.h"

/**
* factorial - function that returns the factorial of a given number.
* @n: the number to be calculated a factorial
* Return: if n is lower than 0, the function return -1
* to indicate an error, otherwise return the factorial
* of the n.
*/

int factorial(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
