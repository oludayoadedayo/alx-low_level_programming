#include "main.h"
/**
 * _islower - function that check for lowercase character
 * @c: is the character to be checked
 * Return: 1 if c is lowercase, otherwise 0.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'Z')
		return (1);
	else
		return (0);
}
