// Pattern printing 
// input =     output = 2 4 6 8 10 12 14 16

#include<stdio.h>

void Pattrn(int iNo)
{
    int iCnt = 0;
    int iNum = 0;

    for(int iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        iNum = iCnt * 2;
        printf("%d\t",iNum);
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