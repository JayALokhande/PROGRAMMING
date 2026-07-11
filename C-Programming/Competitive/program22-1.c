// Pattern printing input = 5 output = A B C D E

#include<stdio.h>

void Pattrn(int iNo)
{
    char Ch = 'A';
    for(int iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        printf(" %c ",Ch);
        Ch ++;
        
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