#include <stdio.h>
int main(){
    char comment[1000];
    int i=2, a=0;

    // take input
    printf("Enter the comment: ");
    gets(comment);
    
    // check if it is a comment
    if(comment[0]=='/'){
        if(comment[1]=='/'){
            printf("It's a single line comment");
        }
        else if(comment[1]=='*'){
            for(i=2; i<1000; i++){
                if(comment[i]=='*' && comment[i+1]=='/'){
                    printf("It is a multi line comment");
                    a=1;
                    break;
                }
                else{
                    continue;
                }
                if(a==0){
                    printf("It is not a comment");
                }
            }
        }
        else{
            printf("It is not a comment");
        }
    }
    else{
        printf("It is not a comment");
    }
    return 0;
}