#include "Multimap.h"
#include "Date.h"
#include <typeinfo>

using namespace std;


/*
====
Node
*/

template <typename T>
Node<T>::Node(T *value)
{
    this->value = new T(*value);
    this->next = NULL;
}

template <typename T>
Node<T>::Node(const Node<T>& other)
{
    this->value = other.value;
    this->next = other.next;
}

template <typename T>
Node<T> &Node<T>::operator=(const Node<T>& other)
{
    if (this == &other)
        return *this;

    delete this->value;

    this->value = other.value;
    this->next = other.next;

    return *this;
}

/*
====
MapNode
*/

template <typename T>
MapNode<T>::MapNode(const MapNode<T>& other)
{
    this->key = other.key;
    this->value = other.value;
    this->next = other.next;
}

template <typename T>
MapNode<T> &MapNode<T>::operator=(const MapNode<T>& other)
{
    if (this == &other)
        return *this;

    delete this->value;

    this->key = other.key;
    this->value = other.value;
    this->next = other.next;

    return *this;
}

/*
==================
Singly Linked List
*/

template <typename T>
SinglyLinkedList<T>::SinglyLinkedList(const SinglyLinkedList<T>& other)
{
    this->length = 0;

    this->start = new Node<T>();

    SLLIterator *sllt = this->getIter();
    SLLIterator *sllo = other.getIter();

    while (getNext(sllo) != NULL)
        this->addNode(getCurrent(sllo)->getValue());

}

template <typename T>
SinglyLinkedList<T> &SinglyLinkedList<T>::operator=(const SinglyLinkedList<T>& other)
{
    if (this == &other)
        return *this;

    this->length = 0;

    this->start = new Node<T>();

    SLLIterator *sllt = this->getIter();
    SLLIterator *sllo = other.getIter();

    while (getNext(sllo) != NULL)
        this->addNode(getCurrent(sllo)->getValue());

}

template <typename T>
void SinglyLinkedList<T>::addNode(T *value)
{
    Node<T> *node = new Node<T>(value);

    if (this->length == 0)
        this->start = node;
    else
    {
        SLLIterator *i = getIter();

        while (getNext(i) != NULL)
            continue;

        getCurrent(i)->setNext(node);
    }
    this->length++;
}

template <typename T>
void SinglyLinkedList<T>::removeNode(T *value)
{
    if (this->length == 0)
        return;

    Node<T> *ptr;
    SLLIterator *i = getIter();

    if (*getNext(i)->getValue() == *value)
    {
        if (this->length > 1)
            this->start = getNext(i);
        else
            this->start = new Node<T>();
    }
    else
    {
        while (getNext(i) != NULL)
        {
            if (*getCurrent(i)->getValue() == *value) break;
            ptr = getCurrent(i);
        }


        if (getNext(i) == NULL && *getCurrent(i)->getValue() != *value)
            return;

        if (getNext(i) == NULL)
            ptr->setNext(NULL);

        else
            ptr->setNext(getNext(i));
    }
    this->length--;
}

template <typename T>
bool SinglyLinkedList<T>::searchNode(T *value)
{
    SLLIterator *i = getIter();

    while (getNext(i) != NULL)
        if (*getCurrent(i)->getValue() == *value)
            return true;

    return false;
}

template <typename T>
T **SinglyLinkedList<T>::getValues()
{
    T **values = (T**)malloc(this->length * sizeof(T));
    int counter = 0;

    SLLIterator *i = getIter();

    while (getNext(i) != NULL)
        values[counter++] = getCurrent(i)->getValue();

    return values;
}

/*
========
MULTIMAP
*/

template <typename T>
Multimap<T>::Multimap(const Multimap<T>& other)
{
    this->length = 0;

    this->start = new MapNode<T>();

    MultimapIterator *sllt = this->getIter();
    MultimapIterator *sllo = other.getIter();

    while (getNext(sllo) != NULL)
        this->addNode(getCurrent(sllo)->getKey(), getCurrent(sllo)->getValue());

}

template <typename T>
Multimap<T> &Multimap<T>::operator=(const Multimap<T>& other)
{
    if (this == &other)
        return *this;

    this->length = 0;

    this->start = new MapNode<T>();

    MultimapIterator *sllt = this->getIter();
    MultimapIterator *sllo = other.getIter();

    while (getNext(sllo) != NULL)
        this->addNode(getCurrent(sllo)->getKey(), getCurrent(sllo)->getValue());
}

template <typename T>
void Multimap<T>::addNode(int *key, T *value)
{
    Node<T> *node = new MapNode<T>(key, value);

    if (this->length == 0)
        this->start = node;
    else
    {
        Node<T> *current = this->start;
        MultimapIterator *i = getIter();

        while (getNext(i) != NULL)
            if (*getCurrent(i)->getKey() == *key)
                throw runtime_error(string("Cannot have duplicate keys!"));

        getCurrent(i)->setNext(node);
    }
    this->length++;
}

template <typename T>
void Multimap<T>::removeNode(int *key)
{
    if (this->length == 0)
        return;

    Node<T> *ptr;
    MultimapIterator *i = getIter();

    if (*getNext(i)->getKey() == *key)
    {
        if (this->length > 1)
            this->start = getCurrent(i)->getNext();
        else
            this->start = new MapNode<T>();
    }
    else
    {

        ptr = this->getStart();
        while (getNext(i) != NULL)
        {
            if (*getCurrent(i)->getKey() == *key) break;
            ptr = getCurrent(i);
        }

        if (ptr->getNext() == NULL && *ptr->getKey() != *key)
            return;

        if (ptr->getNext() == NULL)
            ptr->setNext(NULL);

        else
            ptr->setNext(getNext(i));
    }
    this->length--;
}


template <typename T>
bool Multimap<T>::searchNode(int *key)
{
    if (this->length == 0)
        return false;

    MultimapIterator *i = getIter();

    while (getNext(i) != NULL)
        if (*getCurrent(i)->getKey() == *key)
            return true;

    return false;
}

template <typename T>
int** Multimap<T>::getKeys()
{
    int **keys = (int**)malloc(this->length * sizeof(int*));
    int counter = 0;

    MultimapIterator *i = getIter();

    while (getNext(i) != NULL)
        keys[counter++] = getCurrent(i)->getKey();

    return keys;
}

/*
===============
PRETTY PRINTING
*/

template <typename T>
void SinglyLinkedList<T>::printSLL()
{
    if (this->length > 0)
    {
        SLLIterator *i = getIter();

        while(getNext(i) != NULL)
            cout << *getCurrent(i)->getValue() << endl;
    }
}

template <typename T>
void Multimap<T>::printMultimap()
{
    if (this->length > 0)
    {
        MultimapIterator *i = getIter();

        while(getNext(i) != NULL)
        {
            cout << "Key: " << *getCurrent(i)->getKey() << endl << "Values:\n";
            getCurrent(i)->getValue()->printSLL();
            cout << endl;
        }
    }

    else
        cout << "There's nothing added.\n";
}


/*
====================
TEMPLATE DEFINITIONS
*/

template class Node<int>;
template class Node<Date>;

template class MapNode<int>;
template class MapNode<SinglyLinkedList<int> >;
template class MapNode<SinglyLinkedList<Date> >;

template class SinglyLinkedList<int>;
template class SinglyLinkedList<Date>;

template class Multimap< SinglyLinkedList<int> >;
template class Multimap< SinglyLinkedList<Date> >;
