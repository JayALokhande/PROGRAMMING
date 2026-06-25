//Accept amount in US dollar and return its corresponting in Indian currency .

#include<stdio.h>

double  DollarToINR(double dNo)
{
    double dRs = 0.0;

    // 1 usd = 95.38 INR

    dRs = dNo * 95.38;

    return dRs;

}

int main()
{
    double dValue = 0.0;

    double dRet = 0.0;
    printf("Enter Number of USD : ");
    scanf("%lf",&dValue);

    dRet = DollarToINR(dValue);

    printf("Value in INR is %.2lf", dRet);

    return 0;
}

////////////////////////////////////////////////////////////////
//
// Input :  Enter Number of USD : 10 
// Output : Value in INR is 953.80
//
////////////////////////////////////////////////////////////////