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
    //default constructor
    Node() { this->value = NULL; this->next = NULL; }

    //constructor with parameter
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
    //default constructor
    MapNode() : Node<T>() { this->key = NULL; }

    //constructor with parameter
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

public:
    //default constructor
    SinglyLinkedList<T>() { this->length = 0; this->start = new Node<T>(); }

    /*
    Adds a node to the singly linked list.
    Input: value - T Element
    Output: nothing, adds the new node to the SLL
    Throws: nothing (TODO: if element exists, throw exception)
    */
    void addNode(T *value);

    /*
    Removes a node by value.
    Input: value - T Element
    Output: nothing, deletes the element from the SLL
    Throws: nothing (TODO: if element doesn't exist, throw exception)
    */
    void removeNode(T *value);

    /*
    Checks if a node exists by value.
    Input: value - T Element
    Output: true if element exists, false otherwise
    Throws: nothing
    */
    bool searchNode(T *value);


    //======//
    /*
    Returns an iterator for the SLL.
    */
    Node<T> *getIter() { this->currentIter = this->start; return this->currentIter; }

    /*
    Check if iteration ended.
    */
    bool isValid() const { return !(this->currentIter->getNext() == NULL); }

    /*
    Returns current element from the iteration.
    */
    Node<T> *getCurrent() const { return this->currentIter; }

    /*
    Gets next element (if it exists) from the iteration.
    */
    Node<T> *getNext() { if (this->isValid()) this->currentIter = this->currentIter->getNext(); return NULL; }


    //======//
    virtual int**getKeys() {}

    /*
    Returns a collection of all values in the SLL.
    */
    T **getValues();

    /*
    Returns the start node of the SLL.
    */
    Node<T> *getStart() const { return this->start; }

    /*
    Returns the length of the SLL.
    */
    int getLength() const { return this->length; }

    /*
    Function to display the SLL in the console.
    */
    void printSLL();

    //TODO: free the memory
    //default destructor
    ~SinglyLinkedList() { }
};

template <typename T>
class Multimap : public SinglyLinkedList<T>
{
public:
    //default constrctor
    Multimap<SinglyLinkedList<T> >() { this-> length = 0; this->start = new MapNode<T>(); }

    /*
    Adds a node to the singly linked list.
    Input: value - T Element, key - integer
    Output: nothing, adds the new node to the Multimap
    Throws: nothing (TODO: if key exists, throw exception)
    */
    void addNode(int *key, T *value);

    /*
    Removes a node by key.
    Input: key - integer
    Output: nothing, deletes the element from the Multimap
    Throws: nothing (TODO: if element doesn't exist, throw exception)
    */
    void removeNode(int *key);

    /*
    Checks if a node exists by key.
    Input: key - integer
    Output: true if element exists, false otherwise
    Throws: nothing
    */
    bool searchNode(int *key);

    /*
    Returns a collection of all keys in the Multimap.
    */
    int** getKeys();

    /*
    Function to display the Multimap in the console.
    */
    void printMultimap();
};
