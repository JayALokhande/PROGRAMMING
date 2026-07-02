//write a program which accept the range frome user and display all number in between the range in reverse order 
#include<stdio.h>

int RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;
    
    if(iStart <= iEnd)
    {
        printf("Range  is : ");

        for (iCnt = iEnd ; iCnt >= iStart ; iCnt--)
        {
            printf(" %d ",iCnt);
        }
        
    }
    else
    {
            printf("Invalid range");
    }
    
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter the Starting Point : ");
    scanf("%d",&iValue1);

    printf("Enter the Ending Point : ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);
    return 0;

}