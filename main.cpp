#include <iostream>
#include "Multimap.h"

int main()
{
    SinglyLinkedList<int> *sll = new SinglyLinkedList<int>();

    int *a = (int*)malloc(sizeof(int));

    for (int i = 10; i <= 13; i++)
    {
        *a = i;
        sll->addNode(a);
    }

    sll->printSLL();
    cout << endl;
    cout << endl;

    Multimap <SinglyLinkedList<int> > *multimap = new Multimap <SinglyLinkedList<int> >();

    *a = 3;
    multimap->addNode(a, sll);
    multimap->printMultimap();

    return 0;
}
