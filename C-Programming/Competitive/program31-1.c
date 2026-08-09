#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    int iCount = 0;

    while (*str != '\0')
    {
        if(str[iCnt] >= 'A' && str[iCnt] <= 'Z' )
        {
            iCount++;
        }
        iCnt++;
    }

    return iCount;
    
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf(" Enter String : ");
    scanf("%[^\n]s",Arr);

    iRet = CountCapital(Arr);
    printf("%d",iRet);

    return 0;
}