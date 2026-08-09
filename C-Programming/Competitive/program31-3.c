#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;
    int iCapital = 0;
    int iSmall = 0;

    while (*str != '\0')
    {
        if(str[iCnt] >= 'a' && str[iCnt] <= 'z' )
        {
            iSmall++;
        }
        iCnt++;

        if(str[iCnt] >= 'A' && str[iCnt] <= 'Z' )
        {
            iCapital++;
        }
        iCnt++;
    }

    return (iCapital- iSmall);
    
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf(" Enter String : ");
    scanf("%[^\n]s",Arr);

    iRet = CountSmall(Arr);
    printf("%d",iRet);

    return 0;
}