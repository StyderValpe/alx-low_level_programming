#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: prints alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	char ch = 'a';
		for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
		putchar('\n');
	return (0);
}
