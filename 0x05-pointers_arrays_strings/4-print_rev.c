#include "main.h"

/**
* print_rev -> printing a string in reverse
* @s: the string to be printed in rev
*/
void print_rev(char *s)
{
	int i, m;

	m = 0;
	while (s[m] != '\0')
		m++;

	for (i = m - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
