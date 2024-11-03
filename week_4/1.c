#include <stdio.h>
#include <ctype.h>
#include<string.h>

void removeSpecialCharacters(char *str) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        // Only keep alphanumeric characters
        if (isalnum(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';  // Null-terminate the resulting string
}

int main() {
    char str[100];
    
    printf("Enter the Identifier input string:\n");
    fgets(str, sizeof(str), stdin);  // Read input with spaces if needed
    
    // Remove newline character from fgets
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    removeSpecialCharacters(str);
    
    printf("Output:\n%s\n", str);
    
    return 0;
}
