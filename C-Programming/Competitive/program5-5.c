//Write a program which accept N number and print first 5 multiples of N

#include<stdio.h>

void MulipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
    
        printf(" %d ",iNo * iCnt);

    }

}

int main()
{

    int iValue = 0;
    printf("Enter the Number \n");
    scanf("%d",&iValue);

    MulipleDisplay(iValue);
}

////////////////////////////////////////////////////////////////
//
// Input :  4
// Output : 4  8  12  16  20
//
////////////////////////////////////////////////////////////////