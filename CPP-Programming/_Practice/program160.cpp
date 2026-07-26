#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int X)
        {
            cout<<"Inside Constructor\n";
            iSize = X;              //Characteristic Initilization 
            Arr = new int[iSize];   //Resource Allocation
        }
        ~ArrayX()
        {
            cout<<"Inside Destructor\n";
            delete []Arr;            //Resource Deallocation
        }
};

int main()
{
    //Static Memory Alloction for Object 
    //ArrayX aobj1(5) ;
    
    ArrayX * aobj1 = new ArrayX(5);

    delete aobj1;
    cout<<"End of Main \n";

    return 0;
}


