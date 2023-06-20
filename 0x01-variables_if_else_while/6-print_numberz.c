#include <stdio.h>

/**
 * main - Pogram that prints all single digit numbers of base 10
 * starting from 0,
 * only using putchar and without char variable
 * Return: 0 value
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar((n % 10) + '0');
	putchar('\n');
	return (0);
}
