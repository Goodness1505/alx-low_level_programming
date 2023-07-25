#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Function to generate a random character from a given set of characters
char random_character(const char* char_set) {
    int index = rand() % strlen(char_set);
    return char_set[index];
}

// Function to generate a random password
void generate_password(char* password, int length, const char* char_set) {
    for (int i = 0; i < length - 1; i++) {
        password[i] = random_character(char_set);
    }
    password[length - 1] = '\0'; // Null-terminate the string
}

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Define the character set from which the password will be generated
    const char char_set[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    // Define the length of the password you want to generate
    int password_length = 10;

    // Allocate memory for the password (add +1 for null-terminator)
    char* password = (char*)malloc((password_length + 1) * sizeof(char));

    // Generate the password
    generate_password(password, password_length, char_set);

    // Print the generated password
    printf("Generated Password: %s\n", password);

    // Free the allocated memory
    free(password);

    return 0;
}

