#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: the number of comand line arguments
 * @argv: the array of comand line arguments
 *
 * Return: Always 0 (Sucess)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
