#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase.
 *
 * Return:  0
 */
int main(void)
{
	char c;
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar((digit % 10) + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}