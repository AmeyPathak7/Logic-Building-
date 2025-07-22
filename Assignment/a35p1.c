////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : a35p1.c
// Description : Display all perfect numbers from singly linked list
// Input : 111 → 28 → 17 → 41 → 6 → 189
// Output : 28 6
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

BOOL IsPerfect(int num) {
    int sum = 0;
    for(int i = 1; i <= num/2; i++) {
        if(num % i == 0)
            sum += i;
    }
    return (sum == num);
}

void DisplayPerfect(PNODE Head) {
    while(Head != NULL) {
        if(IsPerfect(Head->Data)) {
            printf("%d\t", Head->Data);
        }
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
    InsertFirst(&First, 111);

    DisplayPerfect(First);
    return 0;
}