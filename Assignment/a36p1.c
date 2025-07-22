////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : a36p1.c
// Description : Reverse each element of singly linked list
// Input : 11 → 28 → 17 → 41 → 6 → 189
// Output : 11 → 82 → 71 → 14 → 6 → 981
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

int ReverseNumber(int num) {
    int rev = 0;
    while(num != 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

void Reverse(PNODE Head) {
    while(Head != NULL) {
        int rev = ReverseNumber(Head->Data);
        printf("%d\t", rev);
        Head = Head->Next;
    }
    printf("\n");
}

int main() {
    PNODE First = NULL;

    InsertFirst(&First, 189);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    Reverse(First);

    return 0;
}