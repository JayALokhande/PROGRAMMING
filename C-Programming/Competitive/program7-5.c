//Write a program which returns the difference between Even Factorial and Odd Factorial of a number.

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            if((iCnt % 2) == 0)
            {
                iEvenFact = iEvenFact * iCnt;
            }
            else
            {
                iOddFact = iOddFact * iCnt;
            }
        }
    }

    return (iEvenFact - iOddFact);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference is %d\n", iRet);

    return 0;
}
////////////////////////////////////////////////////////////////
//
// Input :  Enter number : 12
// Output : Difference is 573
//
////////////////////////////////////////////////////////////////