//Write a program which accept number from user and print numbers till that number

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf(" %d ",iCnt);
    }

}

int main()
{

    int iValue = 0;
    printf("Enter the Number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

////////////////////////////////////////////////////////////////
//
// Input :   12
// Output : 1  2  3  4  5  6  7  8  9  10  11  12
//
////////////////////////////////////////////////////////////////