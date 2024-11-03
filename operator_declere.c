// operator decleration

#include <stdio.h>

int main(){
    char ch[10];
    printf("Enter the operator: ");
    gets(ch);

    switch (ch[0]){
        case '>': if(ch[1]=='='){
            printf("Greater than or Equal to");
        }
        else{
            printf("Greater than");
        }
        break;

        case '<': if(ch[1]=='='){
            printf("Less than or Equal to");
        }
        else{
            printf("Less than");
        }
        break;

        case '=': if(ch[1]=='='){
            printf("Equal to");
        }
        else{
            printf("Assignment operator");
        }
        break;

        case '!': if(ch[1]=='='){
            printf("Not Equal to");
        }
        else{
            printf("Bit Not");
        }
        break;


        case '&': if(ch[1]=='&'){
            printf("And operator");
        }
        else{
            printf("Bit and");
        }
        break;


        case '|': if(ch[1]=='|'){
            printf("OR operator");
        }
        else{
            printf("Bit or");
        }
        break;


        case '+': printf("Addition operator");
        break;

        case '-': printf("Substraction operator");
        break;

        case '/': printf("Division operator");
        break;

        case '*': printf("Multiplication operator");
        break;

        case '%': printf("Modulus operator");
        break;

        default: printf("Not a operator");
    }
    return 0 ;
    
}