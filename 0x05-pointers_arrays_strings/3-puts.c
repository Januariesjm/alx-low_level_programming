#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @string: string to print
 */
void _puts(char *string)
{
	while (*string != '\0')
	{
		_putchar(*string++);
	}
		_putchar('\n');
}
