#include<iostream>
using namespace std;

template<class T>
T Max(T No1, T No2, T No3)
{
    T max = 0 ;

    if((No1 > No2) && (No1 > No3))
    {
        max = No1;
    }
    else if ((No2 > No1) && (No2 > No3))
    {
        max = No2;
    }
    else
    {
        max = No3;
    }
    return max;
}

int main()
{
    int iRet = Max(10,20,30);
    printf("%d\n",iRet);

    float fRet = Max(10.0f,50.0f,30.0f);
    printf("%f\n",fRet);

    double dRet = Max(99.0,90.0,70.0);
    printf("%lf\n",dRet);

    return 0;
}