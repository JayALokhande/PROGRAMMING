//write a program which accept the range frome user and display all number in between the range 
#include<stdio.h>

int RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    
    if(iStart <= iEnd)
    {
        printf("Range  is : ");

        for (iCnt = iStart ; iCnt <= iEnd ; iCnt++)
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

    RangeDisplay(iValue1,iValue2);
    return 0;

}