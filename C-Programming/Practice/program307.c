// Accept number from user and count the number of 1 in the Binary of that number ..
#include<stdio.h>


int main()
{
    int  iNo = 0, iCount = 0, iDigit = 0;

    printf("Enter the Number :");
    scanf("%d",&iNo);

    while (iNo != 0)
    {
        iDigit = iNo % 2;
        iCount = iCount + iDigit;
        iNo = iNo / 2;
        
        
    }
    
    printf("Number of 1 : %d",iCount);

    return 0;
}