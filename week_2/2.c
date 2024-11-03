#include<stdio.h>
#include<string.h>
int isAstarB(char *str){
    int len = strlen(str);

    if(len==0 || str[len-1]!='b'){
        return 0;
    }
    for(int i=0; i<len-1; i++){
        if(str[i]!='a'){
            return 0;
        }
    }
    return 1;
}

int main(){
    char input[1000];

    printf("Enter Input: ");
    while(scanf("%s", input)){
        if(isAstarB(input)){
            printf("Accepted\n");
        }
        else{
            printf("Rejected\n");
        }
        printf("Enter Input: ");
    }
    return 0;
}