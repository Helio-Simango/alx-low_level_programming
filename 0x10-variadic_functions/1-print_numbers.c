#include "variadic_functions.h"

void print_string(const char *s);

/**
* print_numbers - print numbers with separtor
* @separator: char pointer to string separtor
* @n: number of integer
* @...: args
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list ap;
	int value = 0;

	va_start(ap, n);


	for (i = 0; i < n; i++)
	{
		value = va_arg(ap, int);

		printf("%d", value);
		if (separator != NULL && i != n - 1)
			print_string(separator);

	}

	printf("\n");

	va_end(ap);
}

/**
* print_string - to print string using printf
* @s: pointer to string
* Return: void
*/
void print_string(const char *s)
{
	const char *p = s;

	while (*s != '\0')
	{
		printf("%c", *s);
		s++;
	}
	s = p;
}
