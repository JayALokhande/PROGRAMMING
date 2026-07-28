// Accept number accept the position of from user  bit on or off
#include<stdio.h>

typedef unsigned int UINT ;         

int main()
{
    UINT iNo = 0;
    UINT iMask = 0x1;
    UINT iAns = 0;
    UINT iPos = 0;

    printf("Enter the Number : ");
    scanf("%d",&iNo);

    printf("Enter the Position : ");
    scanf("%d",&iPos);

    iMask = iMask << (iPos - 1);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("Bit is ON ");
    }
    else
    {
        printf("Bit is OFF ");
    }
    
    return 0;
}