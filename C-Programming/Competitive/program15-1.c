#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }

    return FALSE;
}

int main()
{
    int iSize = 0, iCnt = 0, iNo = 0;
    BOOL bRet = FALSE;
    int *p = NULL;

    printf("Enter Number of Elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d Elements\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    printf("Enter Number to Search : ");
    scanf("%d", &iNo);

    bRet = Check(p, iSize, iNo);

    if(bRet == TRUE)
    {
        printf("%d is Present\n", iNo);
    }
    else
    {
        printf("%d is Not Present\n", iNo);
    }

    free(p);

    return 0;
}