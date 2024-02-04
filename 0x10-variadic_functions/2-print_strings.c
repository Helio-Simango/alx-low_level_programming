#include "variadic_functions.h"

void print_string(const char *s);

/**
* print_strings - print strings with separtor
* @separator: char pointer to string separtor
* @n: number of integer
* @...: args
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list ap;
	char *str = 0;

	va_start(ap, n);


	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

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
