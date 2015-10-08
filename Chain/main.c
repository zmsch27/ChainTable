#include <stdio.h>
#include <stdlib.h>
#include "chain.h"

int main()
{
    Node *head = NULL;
    int count;
    head = CreateChain(head);
    PushChain(head, 3);
    PrintChain(head);
    count = CountChain(head);
    printf("\n该链表一共有%d个节点", count);
    return 0;
}
