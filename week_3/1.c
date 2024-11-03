#include<stdio.h>
#include<ctype.h>
#include<string.h>

void removeWhitespace(char *str){
    int i=0, j=0;

    while(str[i]){
        if(!isspace(str[i])){
            str[j++]=str[i];
        }
        i++;
    }
    str[j]='\0';
}

int main(){
    char text[100];

    printf("Enter string: ");
    fgets(text, sizeof(text), stdin);

    removeWhitespace(text);
    printf("Output: %s\n", text);

    return 0;
}