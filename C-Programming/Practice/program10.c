////////////////////////////////////////////////////////////////
//
//  Include Required Header Files
//
////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////
//
// Function Name : AddTwoNumbers
// Input :         float , float
// Output :        float
// Description :   Perform Addition of 2 float
// Date :          08/05/2026
// Author :        Jay Anil Lokhande 
//
////////////////////////////////////////////////////////////////

float AddTwoNumbers(
                        float fNo1,              // First Input 
                        float fNo2               // Second Input 
                    )
{
    float fAns = 0.0f;                           //Variable To store result

    fAns = fNo1 + fNo2;                          // Perform Addition

    return fAns;
}

////////////////////////////////////////////////////////////////
//
// Application To Perform Addition of 2 float values
//
////////////////////////////////////////////////////////////////

int main ()
{
    float fValue1 = 0.0f;                       //To store the first input 
    float fValue2 = 0.0f;                       //to store the Second input
    float fResult = 0.0f;                       //To store the result

    printf("Enter First Number :\n");
    scanf("%f",&fValue1);

    printf("Enter Second Number :\n");
    scanf("%f",&fValue2);
 
    fResult = AddTwoNumbers(fValue1 , fValue2) ;            
    
    printf("Addition is :%f\n",fResult);

    return 0 ;
}

////////////////////////////////////////////////////////////////
//
// Input :   10.0   11.0
// Output :  21.0
//
////////////////////////////////////////////////////////////////