#include <stdio.h>

/**
* main - print the alphabet in lowercase
* Return: 0
*/

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
