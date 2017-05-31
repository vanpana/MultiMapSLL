#include <iostream>
#include "Multimap.h"

int main()
{
    cout << "Entered\n";
    SinglyLinkedList<int> *sll = new SinglyLinkedList<int>();

    cout << "Created\n";
    sll->addNode(2);
    cout << "Added\n";
    sll->addNode(4);

    sll->printSLL();
    //SinglyLinkedList< SinglyLinkedList<int> > *map = new SinglyLinkedList< SinglyLinkedList<int> >();
    return 0;
}
