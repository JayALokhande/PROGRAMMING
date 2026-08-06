// Accept number of rows and columns from user and diplay pattern
// Row = 3  Column = 
//pattern = A       A       A       A       A
//          B       B       B       B       B
//          C       C       C       C       C

#include<stdio.h>

void Pattrn(int iRow , int iCol)
{
    int i= 0, j = 0 ;
    char ch  = 'A' ;

    for( i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j <= iCol; j++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
        ch ++;
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