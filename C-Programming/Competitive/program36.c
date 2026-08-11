#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct node
{
    int data ;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first)
{
    while (first != NULL)         //while(first != NULL)         TYPE 1 LOOp
    {
        printf("| %d |->",first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0 ;

    while (first != NULL)          // TYPE 1 LOOP
    {
        iCount++;
        first = first->next;
    }
    
    return iCount;
}

void InsertFirst(PPNODE first,int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(NULL == *first)             //LL is Empty
    {
        *first = newn;
    }
    else                           //LL contains Atlist 1 Node
    {
        newn->next =*first;
        *first = newn;
    }

}

void DisplayOdd(PNODE first)        //This Function is Display only the node contain Odd Number form the LinkedList
{
    while (first != NULL)
    {
        if(first->data % 2 != 0)
        {
            printf("| %d |->",first->data);
        }
        first = first->next;
    }
    printf("NULL\n");
    
}

int FirstOccurrence(PNODE first,int iNo)        //This Function is Finding the First Occerence of the  Number form the LinkedList
{
    PNODE temp = NULL;
    int iPos = 1;
    temp = first;

    while (first != NULL)
    {
        if(first->data == iNo)
        {
            return iPos;
        }
        iPos++;
        first = first->next;
    }
    return -1;
    
}

int LastOccurrence(PNODE First, int iNo)     //This Function is Finding the Last Occerence of the  Number form the LinkedList
{
    int iPos = 1;
    int iLast = -1;

    while(First != NULL)
    {
        if(First->data == iNo)
        {
            iLast = iPos;
        }
        iPos++;
        First = First->next;
    }

    return iLast;
}

int CountGreater(PNODE first,int iNo)          //This Function is Count the Number greater then the given number form the LinkedList
{
    int count = 0;
    while (first != NULL)
    {
        if(first->data > iNo)
        {
            count ++;
        }
        first = first->next;
    }
    return count;
}

int CountLess(PNODE first,int iNo)          //This Function is Count the Number less then the given number form the LinkedList
{
    int count = 0;
    while (first != NULL)
    {
        if(first->data < iNo)
        {
            count ++;
        }
        first = first->next;
    }
    return count;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
    bool bRet = false;

    InsertFirst(&head,111);
    InsertFirst(&head,111);
    InsertFirst(&head,100);
    InsertFirst(&head,51);
    InsertFirst(&head,22);
    InsertFirst(&head,11);

    iRet = CountGreater(head,100);
    printf("Number of greater then given no is :%d\n",iRet);

    iRet = CountLess(head,100);
    printf("Number of Less than given no is : %d\n",iRet);


    Display(head);
    iRet = Count(head);
    printf("Number of Node in the List :",iRet);

    printf("Odd Element list is :");
    DisplayOdd(head);

    iRet = FirstOccurrence(head,111);
    
    if (iRet == -1)
    {
        printf("Element is Not Present ..");
    }
    else
    {
        printf("First Occurrence of the Node is %d\n:",iRet);
    }

    iRet = LastOccurrence(head,111);
    
    if (iRet == -1)
    {
        printf("Element is Not Present ..");
    }
    else
    {
        printf("Last Occurrence of the Node is %d\n:",iRet);
    }

    return 0 ;
}