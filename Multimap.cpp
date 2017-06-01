#include "Multimap.h"
#include <typeinfo>

template <typename T>
Node<T>::Node(T *value)
{
    this->value = new T(*value); // value;
    this->next = NULL;
}

template <typename T>
void SinglyLinkedList<T>::addNode(T *value)
{
    Node<T> *node = new Node<T>(value); //this->createNode(value);

    if (this->start->getNext() == NULL && this->start->getValue() == NULL)
        this->start = node;

    else if (this->start->getNext() == NULL && this->start->getValue() != NULL)
        this->start->setNext(node);

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
}


template <typename T>
void Multimap<T>::addNode(int *key, T *value)
{

    Node<T> *node = new MapNode<T>(key, value);

    //TODO: check for existing key
    if (this->start->getNext() == NULL && this->start->getKey() == NULL)
    {
        this->start = dynamic_cast<MapNode<T>*>(node);//new MapNode<T>();
        this->start = node;
    }
    else if (this->start->getNext() == NULL && this->start->getKey() != NULL)
        this->start->setNext(node);

    else
    {
        Node<T> *next = this->start;


        while (next != NULL)
            next = next->getNext();

        next->setNext(node);
    }
}

 template <typename T>
 void SinglyLinkedList<T>::removeNode(T *value)
 {
     if (this->start == NULL)
         return;


     Node<T> *s, *ptr;
     s = this->start;

     if (*s->getValue() == *value)
     {

         ptr = this->start;
         this->start = s->getNext();
         free(ptr);
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
     free(s);
 }

template <typename T>
void Multimap<T>::removeNode(int *key)
{
    if (this->start == NULL)
        return;


    Node<T> *s, *ptr;
    s = this->start;

    if (*s->getKey() == *key)
    {

        ptr = this->start;
        this->start = s->getNext();
        free(ptr);
        return;
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
    free(s);
}

template <typename T>
void SinglyLinkedList<T>::printSLL()
{
    Node<T> *next = this->start;

    while(next != NULL)
    {
        cout << *next->getValue() << endl;
        next = next->getNext();
    }
}

template <typename T>
void Multimap<T>::printMultimap()
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



template class Node<int>;

template class SinglyLinkedList<int>;

template class Multimap< SinglyLinkedList<int> >;
