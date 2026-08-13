#include<stdio.h>

int CountSpace(char *str)
{

    if (*str == '\0')
    {
        return 0;
    }
    else if (*str == ' ')
    {
        return 1 + CountSpace(str + 1);
    }
    else
    {
        return CountSpace(str + 1);
    }
}

int main()
{
    char Arr [20];
    int iRet = 0;

    printf("Enter the String :");
    fgets(Arr, sizeof(Arr),stdin);

    iRet = CountSpace(Arr);
    printf("Count of WhiteSpace is :%d\n",iRet);

    return 0;
}