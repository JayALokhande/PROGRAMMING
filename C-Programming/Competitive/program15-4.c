#include<stdio.h>
#include<stdlib.h>

void DisplayRange(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d ", Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int iStart = 0, iEnd = 0;
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

    printf("Enter Starting Range : ");
    scanf("%d", &iStart);

    printf("Enter Ending Range : ");
    scanf("%d", &iEnd);

    printf("Numbers in the given range are : ");
    DisplayRange(p, iSize, iStart, iEnd);

    free(p);

    return 0;
}