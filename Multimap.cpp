#include "Multimap.h"
#include <typeinfo>

template <typename T>
Node<T>::Node(T *value)
{
    this->value = new T(*value);
    this->next = NULL;
}

template <typename T>
void SinglyLinkedList<T>::addNode(T *value)
{
    Node<T> *node = new Node<T>(value); //this->createNode(value);

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
void Multimap<T>::addNode(int *key, T *value)
{

    Node<T> *node = new MapNode<T>(key, value);

    if (this->length == 0)
    {
        //this->start = dynamic_cast<MapNode<T>*>(node);
        this->start = node;
    }
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



template class Node<int>;
template class MapNode<int>;
template class MapNode<SinglyLinkedList<int> >;

template class SinglyLinkedList<int>;

template class Multimap< SinglyLinkedList<int> >;
