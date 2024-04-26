#include <stdio.h>
#include <stdbool.h>

// Function to count the number of words in a string
int countWords(char str[]) {
    int count = 0;
    bool inWord = false;

    // Iterate through each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        // If current character is not a space, set inWord to true
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (!inWord) {
                inWord = true;
                count++;
            }
        }
        // If current character is a space and inWord is true, set inWord to false
        else if (inWord) {
            inWord = false;
        }
    }

    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string including whitespaces

    int numWords = countWords(str);

    printf("Number of words in the string: %d\n", numWords);

    return 0;
}
