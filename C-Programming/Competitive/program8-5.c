#include<stdio.h>

double SquareMeter(float fArea)
{ 
    double dMeter = 0.0;

    dMeter = fArea * 0.0929;

    return dMeter ;

}
int main ()
{
    int iValue = 0.0;
    double dRet = 0.0;

    printf("Enter Area in Square feet :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square meter is : %f",dRet);

    return 0;
}