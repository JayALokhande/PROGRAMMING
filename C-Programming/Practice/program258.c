#include<stdio.h>

void Update(char *str)
{
    
    while (*str !='\0')
    {
        if(*str == 'l'  )    // Count Space 
        {
            * str ='-';
        }
        str++;  
    } 
    
}
int main()
{
    char Arr[50]={'\0'};
    

    printf("Enter String :");
    scanf("%[^'\n]s",Arr);                   

    Update(Arr);

    printf("Updated String :%s\n",Arr);
    return 0;
}