#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;

    /* Initialize random seed */
    srand(time(0));

    /* Generate a random number and assign it to n */
    n = rand() - RAND_MAX / 2;

    /* Calculate the last digit of n */
    int last_digit = abs(n) % 10;

    printf("Last digit of %d is %d and is %s\n", n, last_digit,
           (last_digit > 5) ? "greater than 5" :
           (last_digit == 0) ? "0" : "less than 6 and not 0");

    return (0);
}

