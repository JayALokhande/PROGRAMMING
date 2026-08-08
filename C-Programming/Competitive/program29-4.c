// Accept Character From user and Check whether it is Digit  or not  
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckDigits(char ch)
{
    if(ch >= 97 && ch <=122)
    {
        return TRUE;
    }
    else if (ch >= 65 && ch <=90)
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

    bRet = CheckDigits(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case ");
    }
    else
    {
        printf("It is not Small case");
    }
    
} 