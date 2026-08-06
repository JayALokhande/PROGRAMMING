// Accept number of rows and columns from user and diplay pattern
// Row = 4  Column = 4
//pattern = A       B       C       D
//          a       b       c       d
//          A       B       C       D
//          a       b       c       d

#include<stdio.h>

void Pattrn(int iRow , int iCol)
{
    int i= 0, j = 0 ;

    for( i = 1 ; i <= iRow ; i++)
    {
        char ch1 = 'A' ;
        char ch2 = 'a' ;
        for(j = 1 ; j <= iCol; j++)
        {
            if((i % 2)!= 0)
            {
                printf("%c\t",ch1);
                ch1++;
            }
            else
            {
                printf("%c\t",ch2);
                ch2++;
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