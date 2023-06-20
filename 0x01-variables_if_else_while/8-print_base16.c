#include <stdio.h>

/**
 * main - Program that prints
 * all the numbers of base 16 in lowercase
 * followed by a new line
 * Return: 0 value
 */
int main(void)
{
	int n;
	char lowercase;

	for (n = 0; n <= 9; n++)
		putchar((n % 10) + '0');
	for (lowercase = 'a'; lowercase <= 'f'; lowercase++)
		putchar(lowercase);
	putchar('\n');
	return (0);
}
