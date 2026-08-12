#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;
    if(iNo == 0 || iNo == 1 )
    {
        return 1;

    }
    iFact = iNo * iFact;
    Factorial(iNo - 1);
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("factorial is :%d\n",iRet);

    return 0;
}