#include <iostream>
#include <cstdio>
#include <cstdlib>


template <typename T>
class Node
{
private:
    T value;
    Node<T> *next

public:
    Node() { }
    Node(T);

    //getters
    T getValue() const { return this->value; }
    Node<T> getNext() const { return this->next; }

    //setters
    void setValue(const T& value) { this->value = value; }
    void setNext(const Node<T> next) { this->next = next; }

    ~Node() { }
};

template <typename T>
class MapNode : public Node
{
private:
    int key;

public:
    MapNode() { }
    MapNode(int key, T value) : Node(value) { this->key = key; }

    //getter
    int getKey() const { return this->key; }

    //setter
    void setKey(const int& key) { this->key = key; }

    ~MapNode() { }
};


template <typename T>
class SinglyLinkedList
{
private:
    Node<T> *start;

public:
    SinglyLinkedList() { start = NULL; }

    Node<T> *getStart const { return this->start; }

    Node<T> *createNode(T value) { Node<T> *node = new Node<T>(value); return node;}
    Node<T> *createNode(int key, T value) { Node<T> *node = new MapNode<T>(key, value); return node; }

    void addNode(T value);
    void addNode(int key, T value);


    void removeNode(T value);
    void removeNode(int key, T value);
    //search
    //iterator
    //size
    //keys
    //values

    //TODO: free the memory
    ~SinglyLinkedList() { }
};
