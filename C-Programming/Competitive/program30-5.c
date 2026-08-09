#include<stdio.h>

void Display(char ch)
{
    if(ch >= 65 && ch <= 90)
    {
        printf("Decimal : %d\n",ch);
        printf("Octal : %o\n",ch);
        printf("Hexadecimal : %X\n",ch);
    }
    else if ((ch >= 97 && ch <= 122))
    {
        printf("Decimal : %d\n",ch);
        printf("Octal : %o\n",ch);
        printf("Hexadecimal : %X\n",ch);
    }
    else
    {
        printf(" ");
    }
    
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}