//Write a program which accept number from user and display tables in reverse order 

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d X %d = %d\n", iNo, iCnt, iNo * iCnt);
    }

}

int main()
{

    int iValue = 0;
    printf("Enter the Number \n");
    scanf("%d",&iValue);

    TableRev(iValue);
    return 0;

}
