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

/*
==================
Singly Linked List
*/

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

        return;
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
void Multimap<T>::addNode(int *key, T *value)
{
    Node<T> *node = new MapNode<T>(key, value);

    if (this->length == 0)
        this->start = node;
    else
    {
        //TODO: check for existing key
        Node<T> *current = this->start;
        MultimapIterator *i = getIter();

        while (getNext(i) != NULL)
            continue;

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
        while (getNext(i) != NULL)
        {
            if (*getCurrent(i)->getKey() == *key) break;
            ptr = getCurrent(i);
        }

        if (getCurrent(i) == NULL && *getCurrent(i)->getKey() != *key)
            return;

        if (getCurrent(i) == NULL)
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

template class MapNode<SinglyLinkedList<int> >;
template class MapNode<SinglyLinkedList<Date> >;

template class SinglyLinkedList<int>;
template class SinglyLinkedList<Date>;

template class Multimap< SinglyLinkedList<int> >;
template class Multimap< SinglyLinkedList<Date> >;
