//Write a program to find even factorial of give number 

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))
        {
            iFact = iFact * iCnt;
        }
    }

    if(iNo % 2 == 0)
    {
        iFact = iFact * iNo;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial is %d\n", iRet);

    return 0;
}

////////////////////////////////////////////////////////////////
//
// Input :   Enter number : 12
// Output : Even factorial is 576
//
////////////////////////////////////////////////////////////////