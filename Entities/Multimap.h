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

    class SLLIterator
    {
    private:
        SinglyLinkedList<T> *sll;
        Node<T> *current;

    public:
        SLLIterator() {}
        SLLIterator(SinglyLinkedList<T> *sll) { this->sll = sll; current = NULL; }

        bool isValid() { return !(current->getNext() == NULL); }
        Node<T> *getCurrent() { return current; }
        Node<T> *getNext() { if (current == NULL) { current = sll->getStart(); return current; } else if (isValid()) { current = current->getNext(); return current; } return NULL; }

        ~SLLIterator() { }
    };

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
    SLLIterator *getIter() { SLLIterator *i = new SLLIterator(this); return i; }

    /*
    Returns current element from the iteration.
    */
    Node<T> *getCurrent(SLLIterator *i) const { return i->getCurrent(); }

    /*
    Gets next element (if it exists) from the iteration.
    */
    Node<T> *getNext(SLLIterator *i) { return i->getNext(); }

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

    friend ostream& operator<<(ostream& os, const SinglyLinkedList& sll)
    {
        if (sll.getLength() > 0)
        {
            Node<T> *current = sll.getStart();

            while(current != NULL)
            {
                os << *current->getValue() << endl;
                current = current->getNext();
            }
        }
        return os;
    }

    //TODO: free the memory
    //default destructor
    ~SinglyLinkedList() { }
};

template <typename T>
class Multimap : public SinglyLinkedList<T>
{
public:
    //default constrctor #TODO: Copy constructor?
    Multimap<SinglyLinkedList<T> >() { this-> length = 0; this->start = new MapNode<T>(); }

    class MultimapIterator : public SinglyLinkedList<T>::SLLIterator
    {
    private:
        Multimap<T>*map;
        Node<T> *current;

    public:
        MultimapIterator() {}
        MultimapIterator(Multimap<T> *map) { this->map = map; current = NULL; }

        bool isValid() { return !(current->getNext() == NULL); }
        Node<T> *getCurrent() { return current; }
        Node<T> *getNext() { if (current == NULL) { current = map->getStart(); return current; } else if (isValid()) { current = current->getNext(); return current; } return NULL; }

        ~MultimapIterator() { }
    };

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
    Returns an iterator for the SLL.
    */
    MultimapIterator *getIter() { MultimapIterator *i = new MultimapIterator(this); return i; }

    /*
    Returns current element from the iteration.
    */
    Node<T> *getCurrent(MultimapIterator *i) const { return i->getCurrent(); }

    /*
    Gets next element (if it exists) from the iteration.
    */
    Node<T> *getNext(MultimapIterator *i) { return i->getNext(); }

    /*
    Returns a collection of all keys in the Multimap.
    */
    int** getKeys();

    /*
    Function to display the Multimap in the console.
    */
    void printMultimap();

    friend ostream& operator<<(ostream& os, const Multimap& m)
    {
        if (m.getLength() > 0)
        {
            Node<T> *current = m.getStart();

            while(current != NULL)
            {
                os << *current->getKey() << endl;
                os << *current->getValue();

                current = current->getNext();
            }
        }
        return os;
    }
};
