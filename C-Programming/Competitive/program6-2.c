// Accept single digit from user and print it into word

#include<stdio.h>

void Display(int iNo)
{
    switch (iNo)
    {
        case 0:
            printf("Zero");
            break;
        
        case 1:
            printf("One");
            break;
        
        case 2:
            printf("Two");
            break;
        
        case 3:
            printf("Three");
            break;
        
        case 4:
            printf("Four");
            break;
        
        case 5:
            printf("Five");
            break;

        case 6:
            printf("Six");
            break;
        
        case 7:
            printf("Seven");
            break;
        
        case 8:
            printf("Eight");
            break;
        
        case 9:
            printf("Nine");
            break;
    
        default:
            printf("Invalid digit : ");
            break;
    }
}

int main()
{

    int iValue = 0;
    printf("Enter the Number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

////////////////////////////////////////////////////////////////
// PS C:\Users\jay anil lokhande\OneDrive\Desktop\LB-ASSI\ASS-6> gcc Assignment6-2.c -o myexe
// PS C:\Users\jay anil lokhande\OneDrive\Desktop\LB-ASSI\ASS-6> ./myexe
// Enter the Number
// 1
// One
// PS C:\Users\jay anil lokhande\OneDrive\Desktop\LB-ASSI\ASS-6> ./myexe
// Enter the Number
// 2
// Two
//
////////////////////////////////////////////////////////////////