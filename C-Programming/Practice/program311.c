// Accept number ..
#include<stdio.h>

typedef unsigned int UINT ;         

int main()
{
    UINT iNo = 0;
    UINT iMask = 64;
    UINT iAns = 0;

    printf("Enter the Number : ");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("Seventh Bit is ON ");
    }
    else
    {
        printf("Seventh Bit is OFF ");
    }
    
    return 0;
}