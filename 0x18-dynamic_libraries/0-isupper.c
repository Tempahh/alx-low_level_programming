#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	/* Check if the character is within the range of uppercase letters */
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
