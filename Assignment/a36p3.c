////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : a36p3.c
// Description : Display product of digits of each element in singly linked list (ignore 0s)
// Input : 111 → 1201 → 1321 → 141
// Output : 1 2 6 4
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

int ProductOfDigits(int num) {
    int prod = 1, digit = 0;
    while(num != 0) {
        digit = num % 10;
        if(digit != 0)
            prod *= digit;
        num /= 10;
    }
    return prod;
}

void DisplayProduct(PNODE Head) {
    while(Head != NULL) {
        printf("%d\t", ProductOfDigits(Head->Data));
        Head = Head->Next;
    }
    printf("\n");
}

int main() {
    PNODE First = NULL;

    InsertFirst(&First, 141);
    InsertFirst(&First, 1321);
    InsertFirst(&First, 1201);
    InsertFirst(&First, 111);

    DisplayProduct(First);

    return 0;
}
