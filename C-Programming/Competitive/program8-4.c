#include<stdio.h>

double FhtoCs(float Ftemp)
{ 
    double dCelsius = 0.0 ;
    dCelsius = (Ftemp-32)* 5.0/9.0;

    return dCelsius;

}
int main ()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit :");
    scanf("%d",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is : %.41f",dRet);

    return 0;
}