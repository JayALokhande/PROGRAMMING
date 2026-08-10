#include<stdio.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;   // Lowercase to Uppercase
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;   // Uppercase to Lowercase
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