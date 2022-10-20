#include <stdio.h>
#include "main.h"
/**
 * _isdigit - entry point
 * c - character check
 * Description: checks digits from 0 to 9
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
