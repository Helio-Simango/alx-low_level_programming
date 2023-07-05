#include "main.h"

/**
 * _sqrt_nat - Calculate the natural square root of a number
 * @n: Number raw.
 * @r: Result.
 * Return: Helpes the _sqrt_recursion to calculate the square root
 */

int _sqrt_nat(int n, int r)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	if (r > n / 2)
		return (-1);

	if (n != r * r) /*if n is diferent from the r * r call _sqrt_nat with r+a*/
		return (_sqrt_nat(n, r + 1));

	if (n == r * r)
		return (r);

	return (-1);
}

/**
 * _sqrt_recursion - Calculate the natural square root of a number
 * @n: Number
 * Return: returns the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_nat(n, 0));
}
