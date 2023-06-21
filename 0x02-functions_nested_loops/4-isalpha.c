#include "main.h"

/**
 * _isalpha - verify if char is alphabet
 * @c: is the char to be checked
 *
 * Return: 1 if char is lowercase or uppercase, otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

