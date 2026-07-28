// Accept number and find 3 rd bit is on or not
#include<stdio.h>


int main()
{
    int  iNo = 0;
    int iMask = 4;
    int iAns = 0;

    printf("Enter the Number :");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("Third Bit is ON ");
    }
    else
    {
        printf("Third Bit is OFF ");
    }
    
    return 0;
}