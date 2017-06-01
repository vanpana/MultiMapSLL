#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

template <typename T>
class Node
{
private:
    T *value;
    Node<T> *next;

public:
    Node() { this->value = NULL; this->next = NULL; }
    Node(T*);

    //getters
    T *getValue() const { return this->value; }
    Node<T> *getNext() const { return this->next; }
    virtual int *getKey() { return NULL; };

    //setters
    void setValue(T *value) { this->value = value; }
    void setNext(Node<T> *next) { this->next = next; }

    ~Node() { }
};

template <typename T>
class MapNode : public Node<T>
{
private:
    int *key;

public:
    MapNode() : Node<T>() { this->key = NULL; }
    MapNode(int *key, T *value) : Node<T>(value) { this->key = new int(*key); }

    //getter
    int *getKey() override { return this->key; }

    //setter
    void setKey(int *key) { this->key = key; }

    ~MapNode() { }
};


template <typename T>
class SinglyLinkedList
{
protected:
    Node<T> *start;

public:
    SinglyLinkedList<T>() { this->start = new Node<T>(); }

    Node<T> *getStart() const { return this->start; }

    Node<T> *createNode(T *value) { Node<T> *node = new Node<T>(value); return node;}

    void addNode(T *value);

    void removeNode(T *value);

    //search
    //iterator
    //size
    //keys
    //values

    void printSLL();
    //TODO: free the memory
    ~SinglyLinkedList() { }
};

template <typename T>
class Multimap : public SinglyLinkedList<T>
{
public:
    Multimap<SinglyLinkedList<T> >() { this->start = new MapNode<T>(); }

    Node<T> *createNode(int *key, T *value) { Node<T> *node = new MapNode<T>(key, value); return node; }
    void addNode(int *key, T *value);
    void printMultimap();
    //void removeNode(int *key, T value);
};
