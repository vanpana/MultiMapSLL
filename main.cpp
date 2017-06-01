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

    // SinglyLinkedList <SinglyLinkedList<int> > *multimap = new SinglyLinkedList <SinglyLinkedList<int> >();
    //
    // multimap->addNode((int*)3, sll);
    // multimap->printMultimap();

    return 0;
}
