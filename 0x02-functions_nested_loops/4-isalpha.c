#include "main.h"
/**
 * _isalpha _ function to check if c is a letter, lowercase or uppercase
 * @c: is the int that will use for the argument of the function
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c >= 'r') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	else
	return (0);
}
