#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal lines on the terminal
 * @n: The number of times to print diagonal lines
 * Return: 0 (Success)
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
