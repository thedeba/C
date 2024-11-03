#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100], ch;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;

    printf("Enter the Identifier input file name: ");
    scanf("%s", filename);

    // Open the file in read mode
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Could not open file %s.\n", filename);
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(file)) != EOF) {
        // Count characters
        if (!isspace(ch)) {
            characters++;
        }

        // Count lines
        if (ch == '\n') {
            lines++;
        }

        // Count words
        if (!isspace(ch) && in_word == 0) {
            in_word = 1;
            words++;
        } else if (isspace(ch)) {
            in_word = 0;
        }
    }

    // Close the file
    fclose(file);

    // If the file is not empty, add 1 to lines (for the last line without a newline)
    if (characters > 0 && ch != '\n') {
        lines++;
    }

    // Output the counts
    printf("No of characters: %d\n", characters);
    printf("No of words: %d\n", words);
    printf("No of lines: %d\n", lines);

    return 0;
}
