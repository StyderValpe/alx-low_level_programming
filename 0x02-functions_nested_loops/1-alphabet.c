#include "main.h"
/**
 * main - entry point
 * Description: program that prints alphabets in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
