#include <stdio.h>

int _isupper(int c); // Function prototype

int main() {
    char ch = 'H';
    if (_isupper(ch)) {
        printf("%c is an uppercase character.\n", ch);
    } else {
        printf("%c is not an uppercase character.\n", ch);
    }

    ch = 'h';
    if (_isupper(ch)) {
        printf("%c is an uppercase character.\n", ch);
    } else {
        printf("%c is not an uppercase character.\n", ch);
    }

    return 0;
}

