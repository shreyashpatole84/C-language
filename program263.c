#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

// 1 :Allocate memmory for new node
// 2 : Initialize the Node
// 3: check whether LL is empty or not
// 4: if LL is empty store addrees of newNode in first
// 5: otherwise store the addres of newnode inside next pointer
void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));         // 1

    newn->data = no;            //2
    newn->next = NULL;

    if(*Head == NULL)           //3
    {
        *Head = newn;           //4
    }
    else
    {
        newn->next = *Head;     //5
        *Head = newn;           //6
    }
}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));         // 1

    PNODE temp = *Head;

    newn->data = no;            //2
    newn->next = NULL;

    if(*Head == NULL)           //3
    {
        *Head = newn;           //4
    }
    else
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newn;
    }
}

void Display(PNODE Head)
{
    printf("Elements of LinkedList are : \n");

    while(Head != NULL)
    {
        printf("| %d | ->",Head->data);
        Head = Head -> next;
    }
    printf("NULL \n");
}

int Count(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        iCount++;
        Head = Head -> next;
    }
    return iCount;
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertLast(&First, 11);
    InsertLast(&First, 21);
    InsertLast(&First, 51);
    InsertLast(&First, 101);

    Display(First);

    iRet = Count(First);
    printf("Number of Nodes are : %d\n",iRet);

    InsertFirst(&First, 10);
    InsertFirst(&First, 20);

    Display(First);
    iRet = Count(First);
    printf("Number of Nodes are : %d\n",iRet);

    return 0;
}