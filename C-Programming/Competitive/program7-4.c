// Write a program to find odd factorial of given number

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 != 0))
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd factorial is %d\n", iRet);

    return 0;
}
////////////////////////////////////////////////////////////////
//
// Input :   Enter number : 12
// Output : Even factorial is 3
//
////////////////////////////////////////////////////////////////