////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : a36p2.c
// Description : Display palindrome elements from singly linked list
// Input : 11 → 28 → 17 → 414 → 6 → 189
// Output : 11 414 6
// Author : Amey Pathak
// Date : 22/06/2025
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

int IsPalindrome(int num) {
    int temp = num, rev = 0;
    while(temp != 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    return (rev == num);
}

void DisplayPallindrome(PNODE Head) {
    while(Head != NULL) {
        if(IsPalindrome(Head->Data)) {
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
    InsertFirst(&First, 414);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    DisplayPallindrome(First);

    return 0;
}