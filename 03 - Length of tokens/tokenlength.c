#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string including whitespaces

    // Tokenize the string
    char *token = strtok(str, " \t\n");

    // Loop through each token and calculate its length
    while (token != NULL) {
        int length = strlen(token);
        printf("Length of token \"%s\": %d\n", token, length);

        // Get the next token
        token = strtok(NULL, " \t\n");
    }

    return 0;
}
