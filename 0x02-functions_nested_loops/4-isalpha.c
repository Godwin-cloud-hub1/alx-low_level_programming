#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: function that checks for alphabetic character
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 99) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
