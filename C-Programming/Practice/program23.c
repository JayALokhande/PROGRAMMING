#include<stdio.h>

// User Define MACRO
#define AGE_INVALID -1

int CalculateTicketPrice(int iAge)
{
    // Input Filter 
    if(iAge< 0)
    {
        return AGE_INVALID ;
    }
    if(iAge >= 0 && iAge <= 5)
    {
        return 0;
    }
    else if(iAge >= 6 && iAge <= 18)
    {
        return 500;
    }
    else if(iAge >= 19 && iAge <= 50)
    {
        return 900;
    }
    else
    {
        return 400;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0 ;

    printf("Please Enter Your Age to Calculate Ticket Prices : ");
    scanf("%d",&iValue);

    iRet = CalculateTicketPrice(iValue);

    if (iRet== AGE_INVALID)
    {
        printf("Invalid Input Please Enter Postive age \n");
    }
    else
    {
        printf("Your Ticket Price will be %d ruppes\n",iRet);
    }
    
    return 0;
}