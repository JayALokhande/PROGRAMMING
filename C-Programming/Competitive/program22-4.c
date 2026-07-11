// Pattern printing 
// input = 5     output = # 1 * # 2 * # 3 * # 4 * # 5 *

#include<stdio.h>

void Pattrn(int iNo)
{
    int iCnt = 0;
    for(int iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
    }
}

int main()
{
    int iValue = 0 ;
    printf("Enter Number Of Elements : ");
    scanf("%d",&iValue);

    Pattrn(iValue);

    return 0 ;
}