#include<stdio.h>

int CountCapital(const char *str)
{
    int iCount =0;
    while (*str !='\0')
    {
        if((*str >='A')&&(*str <='Z') )    // finding Capital case 
        {
            iCount++;
        }
        str++;
        
    } 
    return iCount;
}

int main()
{
    char Arr[50]={'\0'};
    int iRet = 0;

    printf("Enter String :");
    scanf("%[^'\n]s",Arr);                   

    iRet = CountCapital(Arr);

    printf("Frequency is :%d\n",iRet);
    return 0;
}