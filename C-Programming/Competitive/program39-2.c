#include<stdio.h>

void Display(int No)
{
    if (No == 0)
    {
        return;
    }

    Display(No - 1);

    printf("%d\t",No);
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}