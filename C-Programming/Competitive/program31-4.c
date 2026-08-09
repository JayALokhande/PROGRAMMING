#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckVowel(char *str)
{
    int iCnt = 0;
    int iCount = 0;

    while (*str != '\0')
    {
        if(str[iCnt] == 'a' ||str[iCnt] == 'e'||str[iCnt] == 'i' ||str[iCnt] == 'o' ||str[iCnt] == 'u'  )
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
    
}

int main()
{
    char Arr[20];
    int bRet = 0;

    printf(" Enter String : ");
    scanf("%[^\n]s",Arr);

    bRet = CheckVowel(Arr);
    if(bRet )
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel ");
    }
    

    return 0;
}