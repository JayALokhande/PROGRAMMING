#include<stdio.h>
#include<stdlib.h>

int LastOccurrence(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = iLength - 1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }

    return -1;
}

int main()
{
    int iSize = 0, iCnt = 0, iNo = 0, iRet = 0;
    int *p = NULL;

    printf("Enter Number of Elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
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

    iRet = LastOccurrence(p, iSize, iNo);

    if(iRet == -1)
    {
        printf("%d is not present in the array.\n", iNo);
    }
    else
    {
        printf("Last occurrence of %d is at index %d\n", iNo, iRet);
    }

    free(p);

    return 0;
}