#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: char to check
 * Return: 0 is success
 */
void puts_half(char *str)
{
	int stringnum = 0, m;

	while (str[stringnum] != '\0')
		stringnum++;
	if (stringnum + 1 % 2 != '0')
		m = (stringnum - 1) / 2;
	else
		m = (stringnum / 2);
	m++;

	for (stringnum = m; str[stringnum] != '\0'; stringnum++)
	_putchar(str[stringnum]);
	_putchar('\n');
}
