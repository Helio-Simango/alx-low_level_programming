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
	int num1, num2, num3;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			for (num3 = 48; num3 <= 57; num3++)
			{
				/* verify if the tree number are in order and diferent*/
				if (num1 < num2 && num2 < num3)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
					if (num1 == 55 && num2 == 56 && num3 == 57)
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}

		}

	}

	/*print a new line*/
	putchar(10);
	return (0);
}
