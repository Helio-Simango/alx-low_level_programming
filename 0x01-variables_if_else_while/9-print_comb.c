# include <stdio.h>

/**
* main - prints all possible combinations of single-digit numbers
*
* Return: 0
*
*/

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);
	}
	putchar(10);

	return (0);
}
