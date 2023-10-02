#include "main.h" 

/**
* _puts_recursion - print a string
*
* @s: String.
*/

void _puts_recursion(char *s)
{
	if(*s != '\0')
	{
		_putchar(*s);
		_putchar_recursion(s + 1);
	}
	else
	{
		_putchar(10);
	}

}
