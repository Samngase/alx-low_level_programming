#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 * @c: The number to be checked
 * Return: 1 for a character or 0 for any else
 */

int _isdigit(int x)
{
        if (x >= 48 && x <= 57)
        {
        return (1);
        }
        return (0);
}
