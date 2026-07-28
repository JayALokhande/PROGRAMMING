// Accept number .. find 4 bit is on or not
#include<stdio.h>

typedef unsigned int UINT ;          //typecast

int main()
{
    UINT iNo = 0;
    UINT iMask = 4;
    UINT iAns = 0;

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