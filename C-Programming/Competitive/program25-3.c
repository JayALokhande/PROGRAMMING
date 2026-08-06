// Accept number of rows and columns from user and diplay pattern
// Row = 4 Column = 5
//pattern = a   b   c   d   e
//          1   2   3   4   5
//          a   b   c   d   e
//          1   2   3   4   5 

#include<stdio.h>

void Pattrn(int iRow , int iCol)
{
    int i= 0, j = 0 ;
    char ch = 'a';

    for( i = 1 ; i <= iRow ; i++)
    {
        if((i % 2)!=0)
        {
            for(j = 1 ; j <= iCol ; j++)
            {
                printf("%c\t",ch);
            }
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t",j);
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