//write a program which accept the range frome user and display Sum of all number in between the range
#include<stdio.h>

int RangeDisplaySum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    
    if(iStart <= iEnd)
    {
        for (iCnt = iStart ; iCnt <= iEnd ; iCnt++)
        {
            iSum = iSum + iCnt;
        }
    }
    else
    {
        printf("Invalid range \n");
    }   
    return iSum ; 
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    int iRet = 0;

    printf("Enter the Starting Point : ");
    scanf("%d",&iValue1);

    printf("Enter the Ending  Point : ");
    scanf("%d",&iValue2);

    iRet = RangeDisplaySum(iValue1,iValue2);
    printf("Addition  is : %d ", iRet);
    
    return 0;

}