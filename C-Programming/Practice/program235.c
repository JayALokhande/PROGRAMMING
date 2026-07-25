#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "Jai Ganesh";

    int iRet = 0;

    iRet= strlen(str);

    printf("Length of String is : %d\n",iRet);

    iRet = sizeof(str);
    printf("Size of String is : %d",iRet);
    
    return 0;
}