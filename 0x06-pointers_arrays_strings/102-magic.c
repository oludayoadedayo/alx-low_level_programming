#include <stdio.h>

/**
  * main - program that prints a[2] = 98,
  * followed by a new line
  * Return: 0 (Success)
*/
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	printf("a[2] = %d\n", a[2]);
	return (0);
}