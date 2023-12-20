#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c:char to be checked
 *
 * Return: 1 if character is lowercase else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
