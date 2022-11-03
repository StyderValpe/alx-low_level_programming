#include "main.h"

/**
 * _puts_recursion - entry point
 * Description - function that prints a string followed by a new line
 * s: pointer to string to be printed
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
