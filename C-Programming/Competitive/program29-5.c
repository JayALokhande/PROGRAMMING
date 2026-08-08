  
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL DisplaySchedule(char ch)
{
    if(ch == 'A' || ch == 'a')
    {
        printf("The Exam timming is 7 AM ");
    }
    else if (ch == 'B' || ch == 'b')
    {
        printf("The Exam timming is 8:30 AM ");
    }
    else if (ch == 'C' || ch == 'c')
    {
        printf("The Exam timming is 9:20 AM ");
    }
    else if (ch == 'D' || ch == 'd')
    {
        printf("The Exam timming is 10:30 AM ");
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet = DisplaySchedule(cValue);
    
} 