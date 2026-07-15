#include<stdio.h> 

void Display(int *iPtr)
{
    printf("Value of iPrt : %d\n",iPtr);
}

int main()
{
    int Arr[] ={10,20,30,40,50};

    printf("Base Address of Arr : %d\n",Arr);

    Display(Arr);


    return 0;
}