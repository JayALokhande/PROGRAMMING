//write a program which display ASCII table .Table contains symbol, Decimal , Hexadecimal and octal representation of every member from 0 to 255
#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;
    
    printf("Symbol\tDecimal\tHexadecimal   Octal\n");
    printf("-------------------------------------------------\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c\t%d\t%X\t%o\n", iCnt, iCnt, iCnt, iCnt);
    }

}

int main()
{
    DisplayASCII();
    return 0;
}