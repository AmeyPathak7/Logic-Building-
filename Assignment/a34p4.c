////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : a34p4.c
// Description : Return maximum element from singly linear linked list
// Input : Linked List = 10 → 50 → 30 → 40
// Output : 50
// Author : Amey Pathak
// Date :  22/06/2025
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

int Maximum(PNODE Head) {
    int max = Head->Data;
    while(Head != NULL) {
        if(Head->Data > max)
            max = Head->Data;
        Head = Head->Next;
    }
    return max;
}

int main() {
    PNODE First = NULL;
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 10);

    int iRet = Maximum(First);
    printf("Maximum element is: %d\n", iRet);
    return 0;
}