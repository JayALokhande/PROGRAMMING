#include<stdio.h>

int Count(char *str)
{
    if(*str == '\0')
    {
        return 0;
    }

    return 1 + Count(str + 1);
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter the Number :");
    scanf("%s",Arr);

    iRet = Count(Arr);

    printf("Number of Characters are :%d\n",iRet);

    return 0;
}