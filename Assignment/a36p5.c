////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : a36p5.c
// Description : Display largest digit of each element in singly linked list
// Input : 111 → 2501 → 321 → 491
// Output : 1 5 3 9
// Author : Amey Pathak
// Date : 22/06/2025
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

int LargestDigit(int num) {
    int max = 0, digit;
    while(num != 0) {
        digit = num % 10;
        if(digit > max)
            max = digit;
        num /= 10;
    }
    return max;
}

void DisplayLarge(PNODE Head) {
    while(Head != NULL) {
        printf("%d\t", LargestDigit(Head->Data));
        Head = Head->Next;
    }
    printf("\n");
}

int main() {
    PNODE First = NULL;

    InsertFirst(&First, 491);
    InsertFirst(&First, 321);
    InsertFirst(&First, 2501);
    InsertFirst(&First, 111);

    DisplayLarge(First);

    return 0;
}