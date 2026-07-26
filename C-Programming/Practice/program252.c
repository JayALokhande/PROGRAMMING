#include<stdio.h>

int CountVowels(const char *str)
{
    int iCount =0;
    while (*str !='\0')
    {
        if(*str =='a' || *str =='e' ||*str =='i' ||*str =='o' ||*str =='u' )    // finding Vowela
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

    iRet = CountVowels(Arr);

    printf("Frequency is :%d\n",iRet);
    return 0;
}