#include<stdio.h>

int CountEven(int iNo)
{ 
    int iDigit = 0;
    int iCount = 0;
    while (iNo!=0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2)==0 )
        {
            iCount ++;
        }

        iNo = iNo/ 10;
    }
    return iCount;
    
}
int main ()
{
    int iValue = 0.0;
    int iRet = 0.0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("Even number are : %d",iRet);

    return 0;
}