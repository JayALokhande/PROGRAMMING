#include<iostream>
using namespace std;

int main()
{
    int * Brr = NULL;
    int iLength = 0 ,iCnt = 0;
    
    cout<<"Enter the number of elemnet ";
    cin>>iLength;

    Brr = new int[iLength];
    cout<<"Enter the Element\n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Brr[iCnt];
    }

    cout<<"Element of the Array Are : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<Brr[iCnt]<<endl;
    }

    delete []Brr;

    return 0;
}
