#include<stdio.h>

#define TRUE 1
#define FLASE 0

typedef int BOOL ;

BOOL  CheckSpecial(char ch)
{
    if(ch >= 33 && ch <= 47 || ch >= 58 && ch <= 64|| ch >= 91 && ch <= 96 || ch >= 123 && ch <= 127)
    {
       return TRUE;
    }
    else
    {
        return FLASE;
    }
    
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FLASE;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet = CheckSpecial(cValue);

    if(bRet == TRUE)
    {
        printf(" It is a Special Character ");
    }
    else
    {
        printf(" It is Not a Special Character ");
    }

    return 0;
}