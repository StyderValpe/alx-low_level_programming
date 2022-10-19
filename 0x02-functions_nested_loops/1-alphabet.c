#include "main.h"
/**
 * main - entry point
 * Description: program that prints alphabets in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	int b;

	for (b = 'a'; b <= 'z'; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
