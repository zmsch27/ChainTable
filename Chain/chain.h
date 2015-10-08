#ifndef CHAIN_H_INCLUDED
#define CHAIN_H_INCLUDED

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

Node *CreateChain(Node *head);
void PushChain(Node *head, int n);
int CountChain(Node *head);
void PrintChain(Node *head);

#endif // CHAIN_H_INCLUDED
