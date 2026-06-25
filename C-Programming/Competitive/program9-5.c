
#include<stdio.h>

int CountDiff(int iNo)
{ 
    int iDigit = 0;
    int iSum = 0;
    int iMult = 1;
    
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iMult = iMult * iDigit;
        iNo = iNo/ 10;
    }
    return (iSum - iMult);
    
}
int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Difference is : %d",iRet);

    return 0;
}