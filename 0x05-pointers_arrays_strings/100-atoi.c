#include <stdio.h>

int _atoi(char *s)
{
    int sign = 1; // Initialize the sign to positive
    int result = 0;

    // Skip leading whitespace characters
    while (*s == ' ' || *s == '\t' || *s == '\n')
        s++;

    // Handle the sign (+/-) before the number
    if (*s == '-')
    {
        sign = -1;
        s++;
    }
    else if (*s == '+')
    {
        s++;
    }

    // Convert the digits to the integer value
    while (*s >= '0' && *s <= '9')
    {
        // Check for overflow before adding the next digit
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
        {
            // Handle overflow by returning the appropriate maximum or minimum value
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + (*s - '0');
        s++;
    }

    // Return the result with the appropriate sign
    return result * sign;
}

int main()
{
    char str1[] = "123";
    char str2[] = "-456";
    char str3[] = "   +789xyz";
    char str4[] = "abc";
    char str5[] = "2147483648"; // This is INT_MAX + 1, expecting overflow

    printf("Result 1: %d\n", _atoi(str1));
    printf("Result 2: %d\n", _atoi(str2));
    printf("Result 3: %d\n", _atoi(str3));
    printf("Result 4: %d\n", _atoi(str4));
    printf("Result 5: %d\n", _atoi(str5));

    return 0;
}

