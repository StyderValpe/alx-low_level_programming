#include "main.h"
/**
 * _islower - entry point
 * c - character check
 * Description: check for lowercase characters
 * Return 1 if lowercase, 0 if uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
