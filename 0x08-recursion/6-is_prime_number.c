#include "main.h"

/**
* is_prime_helper - helps to calculate and count the divisors
* @n: number
* @divisor: number
* Return: the natural number and its divisor
*/

int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);

	if (n % divisor == 0)
		return (0);
	return (is_prime_helper(n, divisor + 1));
}

/**
* is_prime_number - function to check if the givin number is prime or not
* @n: number to be checked if id prime or not
* Return: 1 if the input integer is a prime number
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_helper(n, 2));
}
