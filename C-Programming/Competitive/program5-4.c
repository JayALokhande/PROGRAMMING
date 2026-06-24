//Write a program which accept N number from user and print all odd numbers up to N

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2)!= 0)
        {
        printf(" %d ",iCnt);
        }

    }

}

int main()
{

    int iValue = 0;
    printf("Enter the Number \n");
    scanf("%d",&iValue);

    OddDisplay(iValue);
}

////////////////////////////////////////////////////////////////
//
// Input :  18
// Output : 1   3   5   7   9   11  13  15  17
//
////////////////////////////////////////////////////////////////