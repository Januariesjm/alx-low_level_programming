#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
 int c;

 for (c = 48; c < 58; c++)
 {
 _putchar(c);
 }
 _putchar('\n');
}
