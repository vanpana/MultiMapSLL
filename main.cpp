#include <iostream>
#include "Multimap.h"

int main()
{
    cout << "Entered\n";
    SinglyLinkedList<int> *sll = new SinglyLinkedList<int>();

    cout << "Created\n";
    sll->addNode(2);
    cout << "Added 2\n";
    sll->addNode(4);
    cout << "Added 4\n";
    sll->addNode(5);
    cout << "Added 5\n";
    sll->addNode(6);
    sll->addNode(7);


    sll->printSLL();
    //SinglyLinkedList< SinglyLinkedList<int> > *map = new SinglyLinkedList< SinglyLinkedList<int> >();
    return 0;
}
