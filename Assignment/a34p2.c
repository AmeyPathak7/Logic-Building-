////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : a34p2.c
// Description : Search last occurrence of an element in singly linear linked list
// Input : Linked List = 10 → 20 → 30 → 40 → 50 → 30 → 70, Element = 30
// Output : 6
// Author : Amey Pathak
// Date :  22/06/2025
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

int SearchLastOcc(PNODE Head, int no) {
    int pos = 1, lastPos = -1;
    while(Head != NULL) {
        if(Head->Data == no) {
            lastPos = pos;
        }
        Head = Head->Next;
        pos++;
    }
    return lastPos;
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

    int iRet = SearchLastOcc(First, 30);
    printf("Last occurrence is at position: %d\n", iRet);
    return 0;
}
