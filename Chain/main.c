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
    printf("\n������һ����%d���ڵ�", count);
    return 0;
}
