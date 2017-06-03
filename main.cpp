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


    sll->printSLL();
    cout << endl;

    if (sll->searchNode(a))
        cout << "SLL is True";

    cout << endl;

    Multimap <SinglyLinkedList<int> > *multimap = new Multimap <SinglyLinkedList<int> >();

    *a = 3;

    multimap->addNode(a, sll);
    sll->addNode(a);

    //multimap->printMultimap();

    //multimap->removeNode(a);


    *a = 4;
    multimap->addNode(a, sll);
    //multimap->removeNode(a);

    if (multimap->searchNode(a))
        cout << "MM is True";

    //multimap->printMultimap();

    cout << "\n\nKeys are:\n\n";
    int ** keys = multimap->getKeys();
    for (int j = 0; j < multimap->getLength(); j++)
        cout << *keys[j] << endl;

    return 0;
}
