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

    *a = 10;
    sll->removeNode(a);

    *a = 12;
    sll->removeNode(a);

    sll->printSLL();
    cout << endl;
    cout << endl;

    Multimap <SinglyLinkedList<int> > *multimap = new Multimap <SinglyLinkedList<int> >();

    *a = 3;

    multimap->addNode(a, sll);
    sll->addNode(a);

    multimap->removeNode(a);

    *a = 4;
    multimap->addNode(a, sll);

    multimap->removeNode(a);



    multimap->printMultimap();

    return 0;
}
