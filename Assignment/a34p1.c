////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : a34p1.c
// Description : Search first occurrence of an element in singly linear linked list
// Input : Linked List = 10 → 20 → 30 → 40 → 30, Element = 30
// Output : 3
// Author : Amey Pathak
// Date : 23/06/2025
// Status : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;

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

int SearchFirstOcc(PNODE Head, int no) {
    int pos = 1;
    while(Head != NULL) {
        if(Head->Data == no) {
            return pos;
        }
        Head = Head->Next;
        pos++;
    }
    return -1;
}

int main() {
    PNODE First = NULL;
    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    int iRet = SearchFirstOcc(First, 30);
    printf("First occurrence is at position: %d\n", iRet);
    return 0;
}