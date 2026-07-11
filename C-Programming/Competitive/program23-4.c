// Accept number of rows and columns from user and diplay pattern
// Row = 3  Column = 4
//pattern = *       #       *       #
//          *       #       *       #
//          *       #       *       #

#include<stdio.h>

void Pattrn(int iRow , int iCol)
{
    int i= 0, j = 0 ;

    for( i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j <= iCol; j++)
        {
            if((j % 2 )!= 0)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
            
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