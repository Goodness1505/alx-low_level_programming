#include <unistd>

/**
 *
 * _putchar - writes the character c standout
 *
 * @c: The character to print 
 * Return: 1 on success
 
 *on error: -1 is returned , and error is set appopriately.
*/
int _putchar(char c)
{
	return (write(1, &c , 1));
}
