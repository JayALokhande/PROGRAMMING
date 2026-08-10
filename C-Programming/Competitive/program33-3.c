#include<stdio.h>
int FirstChar(char *str,char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCnt;
        }
        iCnt++;
        str++;
    }
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

    iRet = FirstChar(Arr,cValue);

    printf("Character Location is :%d",iRet);

    return 0;
}