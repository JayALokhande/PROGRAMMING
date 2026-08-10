#include<stdio.h>
int LastChar(char *str,char ch)
{
    int iCnt = 0;
    int iPos = -1;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos= iCnt;
        }
        iCnt++;
        str++;
    }
    return iPos;
}

int main()
{
    char Arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter The Character : ");
    scanf(" %c",&cValue);

    iRet = LastChar(Arr,cValue);

    if(iRet == -1)
    {
        printf("Charecter Not Found ");
    }
    else
    {
        printf("Character Location is :%d",iRet);
    }
    return 0;
}