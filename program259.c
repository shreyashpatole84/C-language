#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;



int Count()
{
    return 0;
}





void InsertAtPos()
{}

void DeleteFirst()
{}

void DeleteLast()
{}

void DeleteAtPos()
{}

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    // Allocate memory for node
    newn = (PNODE)malloc(sizeof(NODE));

    // Initialize the node
    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)  // LL is empty
    {
        *Head = newn;
    }
    else            // LL contains atleast one node
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;

    // Allocate memory for node
    newn = (PNODE)malloc(sizeof(NODE));

    // Initialize the node
    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)  // LL is empty
    {
        *Head = newn;
    }
    else            // LL contains atleast one node
    {

    }
}

void Display()
{
    printf("Elements of Linked list are : \n");

    while(Head != NULL)
    {
        printf("|%d| ->",Head->data);
        Head = Head -> next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,111);
    InsertFirst(&First,101);
    InsertFirst(&First,51);    // InsertFirst(60,51);
    InsertFirst(&First,21);     // InsertFirst(60,51);
    InsertFirst(&First,11);     // InsertFirst(60,51);

    Display(First);
    return 0;
}