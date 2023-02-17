#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines either greater than 5, is less than 6, or is 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
0-positive_or_negative.c int n, l;

0-positive_or_negative.c srand(time(0));
0-positive_or_negative.c n = rand() - RAND_MAX / 2;
0-positive_or_negative.c l = n % 10;
0-positive_or_negative.c if (l > 5)
0-positive_or_negative.c {
0-positive_or_negative.c 0-positive_or_negative.c printf("Last digit of %d is %d and is greater than 5\n", n, l);
0-positive_or_negative.c }
0-positive_or_negative.c else if (l == 0)
0-positive_or_negative.c {
0-positive_or_negative.c 0-positive_or_negative.c printf("Last digit of %d is %d and is 0\n", n, l);
0-positive_or_negative.c }
0-positive_or_negative.c else
0-positive_or_negative.c {
0-positive_or_negative.c 0-positive_or_negative.c printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
0-positive_or_negative.c }
0-positive_or_negative.c return (0);
}
