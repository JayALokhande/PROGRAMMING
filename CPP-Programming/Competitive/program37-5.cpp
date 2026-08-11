#include<iostream>
using namespace std;

template<class T>
T Min(T *arr, int iSize)
{
    T min = arr[0];
    int i = 0;

    if(iSize == 0)
    {
        return 0;
    }

    for(i = 0 ;i <iSize; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{ 
    int Arr[] = {10,20,30,40,50};

    float Brr[] = {10.0f,3.7f,9.8f,8.7f};

    double Crr[] = {10.0,3.7,9.8,8.7};

    int iRet = Min(Arr,5);
    printf("%d\n",iRet);

    float fRet = Min(Brr,4);
    printf("%f\n",fRet);

    double dRet = Min(Crr,4);
    printf("%lf\n",dRet);

    return 0;
}