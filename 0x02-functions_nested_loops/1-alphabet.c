#include <stdio.h>

// Function to write a character to the standard output
int _putchar(char c) {
    return putchar(c);
}

// Function to print the alphabet in lowercase
void print_alphabet(void) {
    char c;
    for (c = 'a'; c <= 'z'; c++) {
        _putchar(c);
    }
    _putchar
