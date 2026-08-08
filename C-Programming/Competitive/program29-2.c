// Accept Character From user and Check whether it is Capital  or not  
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckCapital(char ch)
{
    if(ch >= 65 && ch <=90)
    {
        return TRUE;
    }
    else if (ch >= 97 && ch <=122)
    {
        return FALSE;
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

    bRet = CheckCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character ");
    }
    else
    {
        printf("It is not Capital Character ");
    }
    
}