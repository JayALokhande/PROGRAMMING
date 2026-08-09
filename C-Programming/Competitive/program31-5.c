#include<stdio.h>

void Reverse(char str[])
{
    int iStart = 0;
    int iEnd = 0;
    char temp;

    while(str[iEnd] != '\0')
    {
        iEnd++;
    }

    iEnd--;

    while(iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    char Arr[50];

    printf("Enter String : ");
    scanf(" %[^\n]", Arr);

    ReverseString(Arr);

    printf("Reversed String : %s\n", Arr);

    return 0;
}