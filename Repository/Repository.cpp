#include "Repository.h"
#include <sstream>
#include <fstream>

string *splitString(string temp, char separator)
{
    string* args = new string[5];
    stringstream ss(temp);
    string token;
    int i = 0;

    for (i = 0; i < 5; i++)
        args[i] = "";

    i = 0;

    while(getline(ss, token, separator))
        args[i++] = token;

    return args;
}

void Repository::add(int *key, Date *value)
{
    if (items->searchNode(key))
    {
        Multimap<SinglyLinkedList<Date> >::MultimapIterator *i = new Multimap<SinglyLinkedList<Date> >::MultimapIterator(items->getStart());

        while (*items->getNext(i)->getKey() != *key)
            continue;

        items->getCurrent(i)->getValue()->addNode(value);
    }
    else
    {
        SinglyLinkedList<Date> *transactions = new SinglyLinkedList<Date>();
        transactions->addNode(value);

        items->addNode(key, transactions);
    }
}

void Repository::del(int *key)
{
    if (items->searchNode(key))
        items->removeNode(key);
}

void Repository::del(int *key, Date* value)
{
    if (items->searchNode(key))
    {
        Node<SinglyLinkedList<Date> > *current = items->getStart();
        Multimap<SinglyLinkedList<Date> >::MultimapIterator *i = new Multimap<SinglyLinkedList<Date> >::MultimapIterator(items->getStart());


        while (*items->getNext(i)->getKey() != *key)
            continue;

        if (items->getCurrent(i)->getValue()->searchNode(value))
            items->getCurrent(i)->getValue()->removeNode(value);
    }
}

void FileRepository::readFromFile()
{
    //checking for inexistent file
    ifstream f(this->filename);
    if (!f)
    {
        ofstream g(this->filename);
        g << "";
        g.close();
        return;
    }
    string temp;
    string* args;
    int *key = (int*)malloc(sizeof(int));

    while(!f.eof())
    {
        getline(f, temp);
        if (f.eof()) break;

        args = splitString(temp, '.');

        if (args[1] == "")
            *key = stoi(args[0]);
        else
        {
            int day = stoi(args[0]);
            int month = stoi(args[1]);
            int year = stoi(args[2]);
            Date* d = new Date(day, month, year);
            add(key, d);
        }
    }
    f.close();
}

void FileRepository::saveToFile()
{
    ofstream f(this->filename);

    f << *items;

    f.close();
}
