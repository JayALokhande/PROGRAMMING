#include<stdio.h>

void DisplayDigits(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    strtogglex(Arr);

    printf("Modified String is %s",Arr);

    return 0;
}