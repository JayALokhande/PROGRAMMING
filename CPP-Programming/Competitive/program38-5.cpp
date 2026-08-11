#include<iostream>
using namespace std;

template<class T>

void Reverse(T *arr, int iSize)
{
    int iStart = 0;
    int iEnd = iSize -1;

    while (iStart < iEnd)
    {
        T temp = arr[iStart];
        arr[iStart] = arr[iEnd];
        arr[iEnd] = temp;

        iStart++;
        iEnd --;
    }
    
}

int main()
{
    int Arr[] = {10,20,30,40,50};

    Reverse(Arr,5);

    for(int i = 0; i < 5; i++)
    {
        cout << Arr[i] << " ";
    }
    
    return 0;
}