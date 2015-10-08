#include <stdio.h>
#include <stdlib.h>
#include "chain.h"

Node *CreateChain(Node *head)
{
    head = (Node*)malloc(sizeof(Node));
    if(head == NULL)
        exit(0);
    else
        head -> next = NULL;
    return head;
}

void PushChain(Node *head, int n)
{
    int i, data;
    Node *p = NULL;
    for(i = 0; i < n; i++)
    {
        p = (Node*)malloc(sizeof(Node));
        printf("ÊäÈëÊý¾Ý£º");
        scanf("%d", &data);
        p -> data = data;
        p -> next = head -> next;
        head -> next = p;
    }
}

int CountChain(Node *head)
{
    int count = 0;
    Node *p = head -> next;
    while(p)
    {
        count++;
        p = p -> next;
    }
    return count;
}

void PrintChain(Node *head)
{
    Node *p = head -> next;
    printf("%d ", p->data);
    while(p -> next)
    {
        p = p -> next;
        printf("-> %d", p->data);
    }
}
