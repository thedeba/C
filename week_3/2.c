#include<stdio.h>
#include<ctype.h>
#include<string.h>

int countVowel(char *str){
    int count = 0;
    int len = strlen(str);

    for(int i=0; i<len; i++){
        char ch = tolower(str[i]);
        if(ch=='a' || ch=='e' || ch=='o' || ch=='u'){
            count++;
        }
    }
    return count;
}

int countConsonents(char *str){
    int count=0;
    int len = strlen(str);

    for(int i=0; i<len; i++){
        char ch = tolower(str[i]);
        if(isalpha(ch) && !(ch=='a' || ch=='e' || ch=='o' || ch=='u')){
            count++;
        }
    }
    return count;
}

int countDigit(char *str){
    int count=0, len = strlen(str);

    for(int i=0; i<len; i++){
        if(isdigit(str[i])){
            count++;
        }
    }
    return count;
}

int main(){
    char input[100];
    printf("Enter Input: ");
    fgets(input, sizeof(input), stdin);

    int vowels = countVowel(input);
    printf("Vowels: %d\n", vowels);

    int consonents = countConsonents(input);
    printf("Consonents: %d\n", consonents);

    int digit = countDigit(input);
    printf("Digits: %d\n", digit);

    return 0;
}