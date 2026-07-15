#include<stdio.h>



int main()
{
    int Arr [5] = {0};    //BY default all Zero no garbage
    int iCnt = 0;

    printf("Enter the elements : \n");

    for(iCnt = 0 ; iCnt <5 ; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements of the Array are :\n");
    for (iCnt =0 ; iCnt <5 ; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}