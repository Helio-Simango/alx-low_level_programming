#include <stdio.h>

/**
* main - entery point
* Description: prints all possible different
*              combinations of two digits.
*
* Return: 0
*/

int main(void)
{
	int num1, num1;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			if (num1 < num2)
			{
				putchar(num1);
				putchar(num2);
				putchar(',');
				putchar(' ');
			}

		}

	}
	putchar(10);
	return (0);
}
