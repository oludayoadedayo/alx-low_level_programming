#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: 0 value
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'z'; lowercase >= 'a'; lowercase--)
		putchar(lowercase);

	putchar('\n');
	return (0);
}
