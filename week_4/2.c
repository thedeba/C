#include<stdio.h>
#include<ctype.h>
#include<string.h>

char tokenizeString(char *str){
    int i=0, j=0;
    char word[100];
    while(str[i]){
        if(isspace(str[i]) || str[i]=='\n'){
            if(j>0){
                word[j]='\0';
                return word;
                j=0;
            }
        }
        else{
            word[j++]=str[i];
        }
        i++;
    }
    if(j>0){
        word[j]='\0';
        return word;
    }
}

int countArticle(char *str){
    int count=0;
    if(str=='a' || str=='an' || str=='the'){
        count++;
    }
    return count;
}

int main(){
    char input[100];

    printf("Enter input: ");
    fgets(input, sizeof(input), stdin);

    char count = countArticle(tokenizeString(input));
    printf("%d\n", count);

    return 0;
}