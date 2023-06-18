# include <stdio.h>

/**
* main - print all the single decimal numbers
*        using putchar funtion
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
	}
	putchar(10);

	return (0);
}
