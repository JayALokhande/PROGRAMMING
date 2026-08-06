// Accept number of rows and columns from user and diplay pattern
// Row = 4  Column =5 
//pattern = 4   4   4    4   4
//          3   3   3    3   3
//          2   2   2    2   2
//          1   1   1    1   1

#include<stdio.h>

void Pattrn(int iRow , int iCol)
{
    int i= 0, j = 0 ;

    for( i = iRow ; i >= 1; i--)
    {
        for(j = 1; j <=iCol; j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
        
    }
    
}

int main()
{
    int iValue1 = 0 ;
    int iValue2 = 0 ;

    printf("Enter Number Of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter Number Columns : ");
    scanf("%d",&iValue2);

    Pattrn(iValue1,iValue2);

    return 0 ;
}