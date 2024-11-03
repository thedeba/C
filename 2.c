#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Vowel counting
int countVowel(char *str) {
    int i = 0, count = 0;
    while (str[i]) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
        i++;
    }
    return count;
}

// Consonant counting
int countConsonant(char *str) {
    int i = 0, count = 0;
    while (str[i]) {
        if (isalpha(str[i]) && !(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                                 str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')) {
            count++;
        }
        i++;
    }
    return count;
}

// Digit counting
int countDigits(char *str) {
    int i = 0, count = 0;
    while (str[i]) {
        if (isdigit(str[i])) {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    char text[100];
    printf("Enter input: ");
    fgets(text, sizeof(text), stdin);

    int vowels = countVowel(text);
    printf("Vowels: %d\n", vowels);

    int consonants = countConsonant(text);
    printf("Consonants: %d\n", consonants);

    int digits = countDigits(text);
    printf("Digits: %d\n", digits);

    return 0;
}
