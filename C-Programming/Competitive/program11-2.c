//write a program which accept the range frome user and display all Even number in between the range
#include<stdio.h>

int RangeDisplayEven(int iStart , int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range ");
    }
    else
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                printf(" %d ",iCnt);
            }
        }
    }
    
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 ;

    printf("Enter Starting Point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point : ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}