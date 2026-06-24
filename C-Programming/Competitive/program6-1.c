//Write a program which accept number from user and if the number is less then 50 
//then print samll , if the number is greater then 50 and less then 100 the print medium,
//if it is greater then 100 then print large.

#include<stdio.h>

void Number(int iNo)
{
    int iCnt = 0;

    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if ((iNo >50) && (iNo < 100))
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large");
    }
}

int main()
{

    int iValue = 0;
    printf("Enter the Number ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}


////////////////////////////////////////////////////////////////
//
// Input :   5
// Output : $ *  $ *   $ *   $ *   $ *   
//
////////////////////////////////////////////////////////////////