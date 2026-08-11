#include<stdio.h>
#include<string.h>

void StrRevX(char *str)
{
    int iStart = 0;
    int iEnd = strlen(str) - 1;
    char Temp;

    while(iStart < iEnd)
    {
        Temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = Temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']", Arr);

    StrRevX(Arr);

    printf("Reversed String : %s\n", Arr);

    return 0;
}