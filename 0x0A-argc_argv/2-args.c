#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: arguments count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}