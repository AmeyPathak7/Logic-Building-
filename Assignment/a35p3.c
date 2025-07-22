////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : a35p3.c
// Description : Return addition of all even elements in singly linked list
// Input : 111 → 20 → 132 → 141
// Output : 152
// Author : Amey Pathak
// Date :  22/06/2025
// Status : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

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

int AdditionEven(PNODE Head) {
    int sum = 0;
    while(Head != NULL) {
        if((Head->Data % 2) == 0) {
            sum += Head->Data;
        }
        Head = Head->Next;
    }
    return sum;
}

int main() {
    PNODE First = NULL;
    InsertFirst(&First, 141);
    InsertFirst(&First, 132);
    InsertFirst(&First, 20);
    InsertFirst(&First, 111);

    int result = AdditionEven(First);
    printf("Addition of even elements: %d\n", result);

    return 0;
}
