#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: char to check
 * Return: 0 is success
 */
void puts2(char *str)
{
	int stringnum;

	for (stringnum = 0; str[stringnum] != '\0'; stringnum++)
	if (stringnum % 2 == 0)
		_putchar(str[stringnum]);
	_putchar('\n');
}
