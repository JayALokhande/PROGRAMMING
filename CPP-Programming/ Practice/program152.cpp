#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int Summantion(int Arr[] , int iSize)
    {
        int iCnt = 0 , iSum = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;


    }
};

int main()
{
     int * Brr = NULL;
    int iLength = 0 ,iCnt = 0;
    int iRet = 0;

    ArrayX aobj ;
    
    cout<<"Enter the number of elemnet\n";
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

    iRet = aobj.Summantion(Brr, iLength);

    cout<<"Summation is : "<<iRet<<endl;

    delete []Brr;



    return 0;
}


