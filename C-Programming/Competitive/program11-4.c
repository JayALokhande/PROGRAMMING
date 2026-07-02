//write a program which accept the range frome user and display Sum of all Even number in between the range
#include<stdio.h>

int RangeDisplaySumEven(int iStart , int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range \n");
    }
    else
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
    }
    return iSum ;
    
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 ;
    int iRet = 0; 

    printf("Enter Starting Point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point : ");
    scanf("%d",&iValue2);

    iRet= RangeDisplaySumEven(iValue1,iValue2);
    printf("Addition of even number is : %d ",iRet);

    return 0;
}