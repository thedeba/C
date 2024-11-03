#include <stdio.h>
#include <string.h>
int isAplus(char *str)
{
    int len = strlen(str);

    if (len == 0)
    {
        return 0;
    }

    for (int i = 0; i < len; i++)
    {
        if (str[i] != 'a')
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char input[1000];

    printf("Enter Input: ");
    while (scanf("%s", input))
    {
        if (isAplus(input))
        {
            printf("Accepted\n");
        }
        else
        {
            printf("Rejected\n");
        }
        printf("Enter Input: ");
    }
    return 0;
}