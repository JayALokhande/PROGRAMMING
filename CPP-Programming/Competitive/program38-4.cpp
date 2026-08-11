#include<iostream>
using namespace std;

template<class T>

int SearchLast(T *arr, int iSize,T iNo)
{
    int i = 0;
    int iPos = -1;

    for(i =0 ; i < iSize; i++)
    {
        if (arr[i] ==iNo)
        {
            iPos = i + 1;
        }
    }
    return iPos;
}

int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};

    int N = 0;

    cout<<"Enter the Value to Search :";
    cin>>N;

    int iRet = SearchLast(Arr,9,N);

    if(iRet == -1)
    {
        cout << "Element is not present";
    }
    else
    {
        cout << "Last Occurrence Position : " << iRet;
    }
    
    return 0;
}