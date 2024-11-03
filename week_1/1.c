#include<stdio.h>
#include<string.h>

int main(){
    char first_sentence[100], second_sentence[100];

    printf("String 1: ");
    fgets(first_sentence, sizeof(first_sentence), stdin);
    first_sentence[strcspn(first_sentence, "\n")]='\0';

    printf("String 2: ");
    fgets(second_sentence, sizeof(second_sentence), stdin);

    strcat(first_sentence, second_sentence);
    printf("%s\n", first_sentence);

    return 0;
}