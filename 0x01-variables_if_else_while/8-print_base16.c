#include <stdio.h>

int main(void)
{
    char hex_digit = '0';

    while (hex_digit <= 'f')
    {
        putchar(hex_digit);
        hex_digit++;

        if (hex_digit == 'g') // Skip 'g', 'h', 'i', 'j', 'k', 'l', 'm', and 'n'
            hex_digit = 'a';
    }

    putchar('\n');

    return 0;
}

