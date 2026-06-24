//Write a program which accept number from user and display tables

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d X %d = %d\n", iNo, iCnt, iNo * iCnt);
    }

}

int main()
{

    int iValue = 0;
    printf("Enter the Number \n");
    scanf("%d",&iValue);

    Table(iValue);
    return 0;

}
