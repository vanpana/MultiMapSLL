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
    virtual void setKey(int *key) {}

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
    int length;

    Node<T> *currentIter;
    int currentPosition;

public:
    SinglyLinkedList<T>() { this->length = 0; this->start = new Node<T>(); this->currentPosition = 1; }

    Node<T> *createNode(T *value) { Node<T> *node = new Node<T>(value); return node;}

    void addNode(T *value);

    void removeNode(T *value);

    bool searchNode(T *value);

    //iterator
    Node<T> *getIter() { this->currentIter = this->start; return this->currentIter; }
    bool isValid() const { return this->currentPosition < this->length; }
    Node<T> *getCurrent() const { return this->currentIter; }
    Node<T> *getNext() { if (this->isValid()) this->currentIter = this->currentIter->getNext(); return this->currentIter; }


    //general getters
    virtual int** getKeys() {}
    Node<T> ** getValues();

    Node<T> *getStart() const { return this->start; }
    int getLength() const { return this->length; }
    void printSLL();

    //TODO: free the memory
    ~SinglyLinkedList() { }
};

template <typename T>
class Multimap : public SinglyLinkedList<T>
{
public:
    Multimap<SinglyLinkedList<T> >() { this-> length = 0; this->start = new MapNode<T>(); }

    Node<T> *createNode(int *key, T *value) { Node<T> *node = new MapNode<T>(key, value); return node; }
    void addNode(int *key, T *value);
    void removeNode(int *key);
    bool searchNode(int *key);

    void printMultimap();
};
