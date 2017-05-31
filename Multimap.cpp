#include "Multimap.h"
template <typename T>
Node<T>::Node(T value)
{
    this->value = value;
    this->next = NULL;
}

template <typename T>
void SinglyLinkedList<T>::addNode(T value)
{
    Node<T> *node = new Node<T>(value);
    Node<T> *next = this->start;


    while (next != NULL)
    {
        if (next->getValue() == value)
            return;
        next = next->getNext();
    }


    next->setNext(node);
    cout << "set\n";
}


template <typename T>
void SinglyLinkedList<T>::addNode(int key, T value)
{
    Node<T> *node = new MapNode<T>(key, value);
    Node<T> *next = this->start;

    while (next != NULL)
        next = next->getNext();

    next->setNext(node);
}

template <typename T>
void SinglyLinkedList<T>::removeNode(T value)
{
    if (start == NULL)
        return;

    Node<T> *s, *ptr;
    s = this->start;

    if (s->getValue() == value)
    {
        ptr = this->start;
        start = s->getNext();
        free(ptr);
        return;
    }
    else
    {
        while (s != NULL || s->getValue() == value)
        {
            ptr = s;
            s = s->getNext();
        }


        if (s == NULL && s->getValue() != value)
            return;

        if (s == NULL)
            ptr->setNext(NULL);

        else
            ptr->setNext(s->getNext());
    }
    free(s);
}

// template <typename T>
// void SinglyLinkedList<T>::removeNode(int key, T value)
// {
//     if (start == NULL)
//         return;
//
//         Node<T> *s, *ptr;
//         s = this->start;
//
//         if (s->getKey() == key)
//         {
//             //TODO: check leaks here
//             ptr = this->start;
//             start = s->getNext();
//             free(ptr);
//             return;
//         }
//         else
//         {
//             while (s != NULL || s->getKey() == key)
//             {
//                 ptr = s;
//                 s = s->getNext();
//             }
//
//
//             if (s == NULL && s->getKey() != key)
//                 return;
//
//             //TODO: check leaks here
//
//             if (s == NULL)
//                 ptr->setNext(NULL);
//
//             else
//                 ptr->setNext(s->getNext());
//         }
// }

template class Node<int>;
template class SinglyLinkedList<int>;
