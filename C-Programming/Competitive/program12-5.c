
// Write a program which accept number from user and check frequency of number less then 6
#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0 )
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCount ++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = Count(iValue);
    printf("Frequency is : %d ",iRet);
    return 0;
}