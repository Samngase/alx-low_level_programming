#include <stdio.h>

int main(void)
{
    int digit1, digit2;

    for (digit1 = 0; digit1 <= 9; digit1++)
    {
        for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
        {
            putchar(digit1 + '0'); // Convert to character and print
            putchar(',');
            putchar(' ');
            putchar(digit2 + '0'); // Convert to character and print

            if (digit1 != 8 || digit2 != 9) // Don't print comma and space after the last combination
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}

