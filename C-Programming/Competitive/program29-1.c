// Accept Character From user and Check whether it is Alphabet or not  
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAlpha(char ch)
{
    if(ch >= 65 && ch <=90)
    {
        return TRUE;
    }
    else if (ch >= 97 && ch <=122)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet = CheckAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character ");
    }
    else
    {
        printf("It is not Character ");
    }
    
}