#include "main.h"
/**
 * main - entry point
 * Description: program that prints alphabets in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
