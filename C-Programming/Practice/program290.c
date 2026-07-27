#include<stdio.h>
#include<string.h>

void RevDisplay(char *str)
{
    printf("%s",str);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^\n]s",Arr);
    
    RevDisplay(Arr);

    return 0; 
}