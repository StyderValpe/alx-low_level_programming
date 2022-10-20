#include <stdio.h>
#include "main.h"
/**
 * more_numbers - entry point
 * Description: prints numbers from 0 to 14, ten times
 * Return: 0
 */
void more_numbers(void)
{
	char a;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a / 10 > 0)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		putchar('\n');
	}
}
