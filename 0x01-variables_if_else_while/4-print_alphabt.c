#include <stdio.h>

/**
* main - prints the alphabet in lowercase except e and q
*
* Return: 0
*
*/

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		/* e -> 101  113 -> q*/
		if (!(i == 101) && !(i == 113))
		{
			putchar(i);
		}
		i++;
	}

	putchar(10);

	return (0);
}
