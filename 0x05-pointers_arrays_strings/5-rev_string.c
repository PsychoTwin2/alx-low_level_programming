#include "main.h"
/**
 * rev_string - reverses a string
 * @s: char to check
 * Description: This will reverse a string
 * Return: 0 is success
 */
void rev_string(char *s)
{
	int a = 0, b, n;
	char d;

	while (s[a] != '\0')
	{
		a++;
	}
	n = a - 1;
	for (b = 0; n >= 0 && b < n; n--, b++)
	{
		d = s[b];
		s[b] = s[n];
		s[n] = d;
	}
}
