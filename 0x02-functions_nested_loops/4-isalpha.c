#include "main.h"

/**
 * _isalpha - Check if a character is alphabet
 * @c: The character to be checked
 *
 * Return: 1 if the number is positive. 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
