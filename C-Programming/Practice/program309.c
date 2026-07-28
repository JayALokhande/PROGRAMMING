// Accept number ..
#include<stdio.h>


int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 4;
    unsigned int iAns = 0;

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