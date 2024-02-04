 1 #include <stdlib.h>
  2 #include <time.h>
  3 #include <stdio.h>
  4 /*
  5  * main --> Assign a random number to n each time it executes
  6  * and prints the last digit of the stored number in n.
  7  *
  8  * Return: 0 (succes)
  9 */
 10 int main(void)
 11 {
 12         int n;
 13         int m;
 14
 15         srand(time(0));
 16         n = rand() - RAND_MAX / 2;
 17
 18         m = n % 10;
 19         printf("Last digit of %d is ", n);
 20         if (m > 5)
 21           {
 22                 printf("%d and is greater than 5", m);
 23           }
 24         if (m == 0)
 25           {
 26                 printf("%d and is 0", m);
 27           }
 28         if (m < 6 && m != 0)
 29           {
 30                 printf("%d and is less than 6 and not 0", m);
 31           }
 32
 33         printf("\n");
 34
 35         return (0);
 36 }
