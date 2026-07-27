#include<stdio.h>
#include<string.h>

void RevDisplay(char *str)
{
    char *start = NULL;

    start = str;

    while (*str != '\0')
    {
        str++;
    }
    // Issue is printing the \0 also
    while (start <= str)
    {
        printf("%c \n ",*str);
        str --;

    }
    
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^\n]s",Arr);
    
    RevDisplay(Arr);

    return 0; 
}