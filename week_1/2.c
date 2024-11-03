#include <stdio.h>
#include <ctype.h>

int main() {
    char text[1000];
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;

    printf("Enter the Identifier input string (end with CTRL+D on a new line for EOF):\n");

    while (fgets(text, sizeof(text), stdin) != NULL) {
        int i = 0;
        lines++;  // Count each line

        while (text[i] != '\0') {
            // Count characters
            if (!isspace(text[i])) {
                characters++;
            }

            // Check if current character starts a word
            if (!isspace(text[i]) && in_word == 0) {
                in_word = 1;
                words++;
            }
            // End of word
            else if (isspace(text[i])) {
                in_word = 0;
            }
            i++;
        }
    }

    printf("No of characters: %d\n", characters);
    printf("No of words: %d\n", words);
    printf("No of lines: %d\n", lines);

    return 0;
}
