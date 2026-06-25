#include<stdio.h>

double KMtoMeter(int iNo)
{ 
    int Meter = 1000;
    int KM = 0;

    KM = iNo * Meter;

    return KM;

}
int main ()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance :");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("Distance in meter is : %d",iRet);

    return 0;
}