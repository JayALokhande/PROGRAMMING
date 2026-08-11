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
bool Search(PNODE first ,int iNo)          //This Function is Searching the given value is persent int the LinkedList or Not 
{
    while (first != NULL)
    {
        if(first->data == iNo)
        {
            return true;
        }
        first = first->next;
    }
    return false;
    
}
int CountEven(PNODE first)          //This Function is Count the Even Number form the LinkedList
{
    int Evencount = 0;
    while (first != NULL)
    {
        if(first->data % 2 == 0)
        {
            Evencount ++;
        }
        first = first->next;
    }
    return Evencount;
}

int CountOdd(PNODE first)          //This Function is Count the Odd Number form the LinkedList
{
    int Oddcount = 0;
    while (first != NULL)
    {
        if(first->data % 2 != 0)
        {
            Oddcount ++;
        }
        first = first->next;
    }
    return Oddcount;
}
int Frequency(PNODE first , int iNo)        //This Function is return Frequency of the Number form the LinkedList
{
    int Fcount = 0;
    while (first != NULL)
    {
        if(first->data == iNo)
        {
            Fcount ++;
        }
        first = first->next;
    }
    return Fcount;
}

void DisplayEven(PNODE first)        //This Function is Display only the node contain Even Number form the LinkedList
{
    while (first != NULL)
    {
        if(first->data % 2 == 0)
        {
            printf("| %d |->",first->data);
        }
        first = first->next;
    }
    printf("NULL\n");
    
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
    InsertFirst(&head,111);

    printf("Even list is :");
    DisplayEven(head);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n",iRet);

    Display(head);
    iRet = CountEven(head);
    printf("Number of Even nodes are : %d\n",iRet);

    Display(head);
    iRet = CountOdd(head);
    printf("Number of Odd nodes are : %d\n",iRet);

    Display(head);
    iRet = Frequency(head,111);
    printf("Frequency of that number is : %d\n",iRet);


    bRet =Search(head,1);
    
    if(bRet == true)
    {
        printf("Number is Present in the List..");
    }
    else
    {
        printf("Number is Not Present in the List..");
    }


    return 0 ;
}