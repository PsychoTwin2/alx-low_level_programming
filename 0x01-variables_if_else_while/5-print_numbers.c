#include <stdio.h>

/**
 *main - Assign a random number to n each time it is executed
 *and print the last digit of the number stored in the variable n
 *Return: 0
 */
int main(void)
{
int n;

for (n = 0; n < 10; n++)
{
	printf("%d", n);
}
printf("\n");
return (0);
}
