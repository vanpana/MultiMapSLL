#include "Multimap.h"
#include "Date.h"
#include <typeinfo>
#include <string>
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
            Node<T> *current = this->start;


            while (current->getNext() != NULL)
            {
                if (current->getValue() == value)
                    return;
                current = current->getNext();
            }
            current->setNext(node);
    }
    this->length++;
}

template <typename T>
void SinglyLinkedList<T>::removeNode(T *value)
{
    if (this->length == 0)
        return;

    Node<T> *s, *ptr;
    s = this->start;

    if (*s->getValue() == *value)
    {
        ptr = this->start;
        if (this->length > 1)
            this->start = s->getNext();
        else
            this->start = new Node<T>();
        //free(ptr);
        return;
    }
   else
    {
        while (s != NULL)
        {
            if (*s->getValue() == *value) break;
            ptr = s;
            s = s->getNext();
        }


        if (s == NULL && *s->getValue() != *value)
            return;

        if (s == NULL)
            ptr->setNext(NULL);

        else
            ptr->setNext(s->getNext());
    }
    this->length--;

    free(s);
}

template <typename T>
bool SinglyLinkedList<T>::searchNode(T *value)
{
    Node<T> *current = this->start;

    while (current->getNext() != NULL)
    {
        if (*current->getValue() == *value)
            return true;
        current = current->getNext();
    }

    if (*current->getValue() == *value)
        return true;

    return false;
}

template <typename T>
T **SinglyLinkedList<T>::getValues()
{
    T **values = (T**)malloc(this->length * sizeof(T));
    int counter = 0;
    Node<T> *current = this->start;

    while (current->getNext() != NULL)
    {
        values[counter++] = current->getValue();
        current = current->getNext();
    }
    values[counter++] = current->getValue();
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

        while (current->getNext() != NULL)
            current = current->getNext();

        current->setNext(node);
    }
    this->length++;
}



template <typename T>
void Multimap<T>::removeNode(int *key)
{
    if (this->length == 0)
        return;

    Node<T> *s, *ptr;
    s = this->start;

    if (*s->getKey() == *key)
    {
        ptr = this->start;
        if (this->length > 1)
            this->start = s->getNext();
        else //HERE SEG FAULT
        {
            //Node<int> *test = new MapNode<int>();
            //Node<T>*test =
            //cout << *test->getValue()->getStart()->getValue() << endl;
            this->start = new MapNode<T>();
            //cout << "START IS: \n\n\n\n"; this->start->getKey();
        }
    }
    else
    {
        while (s != NULL)
        {
            if (*s->getKey() == *key) break;
            ptr = s;
            s = s->getNext();
        }


        if (s == NULL && *s->getKey() != *key)
            return;

        if (s == NULL)
            ptr->setNext(NULL);

        else
            ptr->setNext(s->getNext());
    }
    this->length--;

    free(s);
}


template <typename T>
bool Multimap<T>::searchNode(int *key)
{
    Node<T> *current = this->start;

    while (current->getNext() != NULL)
    {
        if (*current->getKey() == *key)
            return true;
        current = current->getNext();
    }

    if (*current->getKey() == *key)
        return true;

    return false;
}

template <typename T>
int** Multimap<T>::getKeys()
{
    int **keys = (int**)malloc(this->length * sizeof(int*));
    int counter = 0;
    Node<T> *current = this->start;

    while (current->getNext() != NULL)
    {
        keys[counter++] = current->getKey();
        current = current->getNext();
    }
    keys[counter++] = current->getKey();
    return keys;
}

/*
===============
PRETTY PRINTING
*/

template <typename T>
void SinglyLinkedList<T>::printSLL()
{
    Node<T> *current = this->start;

    while(current != NULL)
    {
        cout << *current->getValue() << endl;
        current = current->getNext();
    }
}

template <typename T>
void Multimap<T>::printMultimap()
{
    if (this->length > 0)
    {
        Node<T> *current = this->start;

        while(current != NULL)
        {
            cout << "Key: " << * current->getKey() << endl << "Values:\n";
            current->getValue()->printSLL();
            cout << endl;
            current = current->getNext();
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
template class SinglyLinkedList<string>;

template class Multimap< SinglyLinkedList<int> >;
template class Multimap< SinglyLinkedList<Date> >;
