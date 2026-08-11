#include<iostream>
using namespace std;

template<class T>

int Frequency(T *arr, int iSize,T iNo)
{
    int i = 0;
    int iCount = 0;

    for(i =0 ; i < iSize; i++)
    {
        if (iNo == arr[i])
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = Frequency(Arr,9, 10);

    printf("%d",iRet);
    
    return 0;
}