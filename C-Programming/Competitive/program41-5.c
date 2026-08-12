#include<stdio.h>

int Product(int iNo)
{
    if (iNo == 0)
    {
        return 1;
    }

    return(iNo % 10) * Product(iNo / 10);
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = Product(iValue);
    printf("Product is :%d\n",iRet);

    return 0;
}