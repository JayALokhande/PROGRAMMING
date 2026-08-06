// Accept number of rows and columns from user and diplay pattern
// Row = 4  Column = 4
//pattern = 1   2   3   4
//          2   3   4   5   
//          3   4   5   6
//          4   5   6   7 

#include<stdio.h>

void Pattrn(int iRow , int iCol)
{
    int i= 0, j = 0 ;
    int iCount = 0;
    for( i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            printf("%d\t", i + j - 1);
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