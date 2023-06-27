include "main.h"

/**
 * print_rev - Print a string in reverse.
 * @s: Pointer to string
 */

void print_rev(char *s)
{
	if (s == NULL) {
		return;  // Handle the case when the string is empty or NULl
	}
    
	int length = 0;

	// Calculate the length of the string
	while (s[length] != '\0') {
		length++;
	}    
	// Print the string in reverse
	for (int i = length - 1; i >= 0; i--) {
		_putchar( s[i]);
	}
	_putchar(10);
}
