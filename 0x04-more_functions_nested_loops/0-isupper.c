#include "main.h"
/**
 * _isupper - Check if a letter is upper
 * @x: the number to be checked
 * Return: 1 for upper letter or 0 for any else
 */

int _isupper(int c) 
{
    // ASCII values for uppercase letters range from 65 ('A') to 90 ('Z')
    // Check if the ASCII value of the character falls within this range
    if (c >= 65 && c <= 90) {
        return 1; // Uppercase character found
    } else {
        return 0; // Not an uppercase character
    }
}
