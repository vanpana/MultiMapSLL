#include "Repository.h"

void Repository::add(int *key, Date *value)
{
    if (items->searchNode(key))
    {
        Node<SinglyLinkedList<Date> > *current = items->getStart();

        while (*current->getKey() != *key)
            current = current->getNext();

        current->getValue()->addNode(value);
    }
    else
    {
        SinglyLinkedList<Date> *transactions = new SinglyLinkedList<Date>();
        transactions->addNode(value);

        items->addNode(key, transactions);
    }
}

void Repository::del(int *key)
{
    if (items->searchNode(key))
        items->removeNode(key);
}

void Repository::del(int *key, Date* value)
{
    if (items->searchNode(key))
    {
        Node<SinglyLinkedList<Date> > *current = items->getStart();

        while (*current->getKey() != *key)
            current = current->getNext();

        if (current->getValue()->searchNode(value))
            current->getValue()->removeNode(value);
    }
}
