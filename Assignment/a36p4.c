////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : a36p4.c
// Description : Display smallest digit of each element in singly linked list
// Input : 111 → 2501 → 321 → 415
// Output : 1 0 1 1
// Author : Amey Pathak
// Date :  22/06/2025
// Status : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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

int SmallestDigit(int num) {
    int min = 9, digit;
    while(num != 0) {
        digit = num % 10;
        if(digit < min)
            min = digit;
        num /= 10;
    }
    return min;
}

void DisplaySmall(PNODE Head) {
    while(Head != NULL) {
        printf("%d\t", SmallestDigit(Head->Data));
        Head = Head->Next;
    }
    printf("\n");
}

int main() {
    PNODE First = NULL;

    InsertFirst(&First, 415);
    InsertFirst(&First, 321);
    InsertFirst(&First, 2501);
    InsertFirst(&First, 111);

    DisplaySmall(First);

    return 0;
}