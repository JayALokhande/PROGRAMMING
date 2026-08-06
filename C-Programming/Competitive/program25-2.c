// Accept number of rows and columns from user and diplay pattern
// Row = 4 Column = 5
//pattern = 2   4   6   8   10
//          1   3   5   7   9  
//          2   4   6   8   10
//          1   3   5   7   9  

#include<stdio.h>

void Pattrn(int iRow , int iCol)
{
    int iCnt = 1;
    int i= 0, j = 0 ;

    for( i = 1 ; i <= iRow ; i++)
    {
        if((i % 2)!=0)
        {
            for(j = 1 ; j <= iCol ; j++)
            {
                printf("%d\t",j*2);
            }
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", (j * 2) - 1);
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