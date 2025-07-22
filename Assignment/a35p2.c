////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : a35p2.c
// Description : Display all prime numbers from singly linked list
// Input : 111 → 201 → 17 → 41 → 221 → 89
// Output : 17 41 89
// Author : Amey Pathak
// Date :  22/06/2025
// Status : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

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

BOOL IsPrime(int num) {
    if(num <= 1) return FALSE;
    for(int i = 2; i <= num/2; i++) {
        if(num % i == 0)
            return FALSE;
    }
    return TRUE;
}

void DisplayPrime(PNODE Head) {
    while(Head != NULL) {
        if(IsPrime(Head->Data)) {
            printf("%d\t", Head->Data);
        }
        Head = Head->Next;
    }
    printf("\n");
}

int main() {
    PNODE First = NULL;
    InsertFirst(&First, 89);
    InsertFirst(&First, 221);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 201);
    InsertFirst(&First, 111);

    DisplayPrime(First);
    return 0;
}