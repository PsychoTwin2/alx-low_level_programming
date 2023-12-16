#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main: Assign a random number to  n each time it is executed
 *and print the last digit of the number in  n
 *Return: 0
 */
int main(void)
{
	int m;
	int x;
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n % 10;
	printf("Last digit of %d is %d ", n, m);
	if (x > 5)
	{
		printf("and is greater than 5");
	}
	if (x == 0)
	{
		printf("and is 0");
	}
	if (x < 6 && x != 0)
	{
		printf("and is less than 6 and not 0");
	}

	printf("\n");

	return (0);
}
