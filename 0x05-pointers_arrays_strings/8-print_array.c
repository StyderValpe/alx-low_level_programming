#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints an input number of elements of an array of integers
 * a: An array of intergers
 * n: The number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);


	if (i == n - 1)

		continue;
		print (", ");
	}
	printf("\n");
}
