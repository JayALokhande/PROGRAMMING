/*
    START
        Accept First Number as No1
        Accept Second Number as No2
        Perform  Addition of No1 & No2
        Display the result
    STOP



*/


#include<stdio.h>

int main ()
{
    float i , j ,k;

    printf("Enter First Number :\n");
    scanf("%f",&i);

    printf("Enter Second Number :\n");
    scanf("%f",&j);

    k = i + j;

    printf("Addition is :%f\n",k);



    return 0 ;
}