////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : a34p3.c
// Description : Return sum of all elements from singly linear linked list
// Input : Linked List = 10 → 20 → 30 → 40
// Output : 100
// Author : Amey Pathak
// Date : 22/06/2025
// Status : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

struct node {
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no) {
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->Next = *Head;
    *Head = newn;
}

int Addition(PNODE Head) {
    int sum = 0;
    while(Head != NULL) {
        sum += Head->Data;
        Head = Head->Next;
    }
    return sum;
}

int main() {
    PNODE First = NULL;
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    int iRet = Addition(First);
    printf("Addition of all elements: %d\n", iRet);
    return 0;
}