////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : a35p4.c
// Description : Return second maximum element from singly linked list
// Input : 110 → 230 → 201 → 401 → 640
// Output : 401
// Author : Amey Pathak
// Date :  22/06/2025
// Status : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node {
    int Data;
    struct node* Next;
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

int SecMaximum(PNODE Head) {
    int max = INT_MIN, second = INT_MIN;

    while(Head != NULL) {
        if(Head->Data > max) {
            second = max;
            max = Head->Data;
        } else if(Head->Data > second && Head->Data != max) {
            second = Head->Data;
        }
        Head = Head->Next;
    }
    return second;
}

int main() {
    PNODE First = NULL;
    InsertFirst(&First, 640);
    InsertFirst(&First, 401);
    InsertFirst(&First, 201);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    int result = SecMaximum(First);
    printf("Second Maximum element: %d\n", result);

    return 0;
}
