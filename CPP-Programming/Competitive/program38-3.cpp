#include<iostream>
using namespace std;

template<class T>

int SearchFirst(T *arr, int iSize,T iNo)
{
    int i = 0;
    int iCount = 0;

    for(i =0 ; i < iSize; i++)
    {
        iCount++;
        if (iNo == arr[i])
        {
            return iCount;
        }
    }
    return iCount;
}

int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};

    int N = 0;

    cout<<"Enter the Value to Search :";
    cin>>N;

    int iRet = SearchFirst(Arr,9,N);

    if(iRet == -1)
    {
        cout << "Element is not present";
    }
    else
    {
        cout << "First Occurrence Position : " << iRet;
    }
    
    return 0;
}