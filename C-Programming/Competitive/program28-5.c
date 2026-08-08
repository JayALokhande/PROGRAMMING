// Accept number of rows and columns from user and diplay pattern
// Row = 5, Column = 5
        /*pattern = 1   2   3   4   5
                    1   2           5
                    1       3       5
                    1           4   5
                    1   2   3   4   5
*/

#include<stdio.h>

void Pattrn(int iRow , int iCol)
{
    int i= 0, j = 0 ;

    for( i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            if((i == 1) || (i == iRow) || (j == 1) || (j == iCol) || (i == j))
            {
                printf("%d\t", j);
            }
            else
            {
                printf(" \t");
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