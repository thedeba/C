#include<stdio.h>
#include<ctype.h>
#include<string.h>

void tokenizeString(char *str){
    int i=0, j=0;
    char word[100];

    while (str[i]!='\0')
    {
        if(isspace(str[i]) || str[i]=='\n'){
            if(j>0){
                word[j]='\0';
                printf("%s\n", word);
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
        printf("%s\n", word);
    }
}

int main(){
    char input[100];

    printf("Enter input: ");
    fgets(input, sizeof(input), stdin);

    printf("Output:\n");
    tokenizeString(input);

    return 0;
}