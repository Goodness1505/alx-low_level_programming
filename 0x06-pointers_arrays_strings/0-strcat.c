#include "main.h"


char *_strcat(char *dest, const char *src)
{
char *result = dest;

Find the end of dest
while (*dest != '\0')
{
dest++;
}

Append src to dest
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

Add a terminating null byte
* dest = '\0';

return (0);
}

