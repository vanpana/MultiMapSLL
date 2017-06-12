#include "Console.h"

void Console::printMenu()
{
    cout << "============" << endl;
    cout << "1. Add a transaction for a customer." << endl;
    cout << "2. Remove a customer." << endl;
    cout << "3. Remove a transaction from a customer." << endl;
    cout << "4. View all customer IDs;" << endl;
    cout << "5. View a customer's date transactions;" << endl;
    cout << "0. Exit" << endl;
}

int Console::getInteger()
{
    string tempS;
    int tempI;
    getline(cin, tempS);

    for (int i = 0; i < tempS.size(); i++)
        if (!isdigit(tempS[i]))
            return -1;
    tempI = stoi(tempS);
    return tempI;
}

string Console::getString()
{
    string tempS;
    getline(cin, tempS);

    return tempS;
}

void Console::addTransaction()
{
    cout << "Input customer ID: ";
    int *id = (int*)malloc(sizeof(int));
    *id = getInteger();

    cout << "Input transaction date (dd.mm.yyyy): ";
    //TODO: validations
    string datestring = getString();

    int day = stoi(splitString(datestring, '.')[0]);
    int month = stoi(splitString(datestring, '.')[1]);
    int year = stoi(splitString(datestring, '.')[2]);
    Date* d = new Date(day, month, year);

    this->ctrl->add(id, d);
}

void Console::removeCustomer()
{
    cout << "Input customer ID: ";
    int *id = (int*)malloc(sizeof(int));
    *id = getInteger();

    this->ctrl->del(id);
}

void Console::removeTransaction()
{
    cout << "Input customer ID: ";
    int *id = (int*)malloc(sizeof(int));
    *id = getInteger();

    cout << "Input transaction date (dd.mm.yyyy): ";
    //TODO: validations
    string datestring = getString();

    int day = stoi(splitString(datestring, '.')[0]);
    int month = stoi(splitString(datestring, '.')[1]);
    int year = stoi(splitString(datestring, '.')[2]);
    Date* d = new Date(day, month, year);

    this->ctrl->del(id, d);
}

void Console::viewAllCustomerID()
{
    Multimap<SinglyLinkedList<Date> > *items = this->ctrl->getAll();
    Multimap<SinglyLinkedList<Date> >::MultimapIterator *i = new Multimap<SinglyLinkedList<Date> >::MultimapIterator(items->getStart());

    cout << "There are " << items->getLength() << " clients.\n";

    if (items->getLength() > 0)
        while (items->getNext(i) != NULL)
            cout << "Client with ID " << *items->getCurrent(i)->getKey() << "\n";
}

void Console::viewCustomerTransactions()
{
    cout << "Input customer ID: ";
    int id = getInteger();

    Multimap<SinglyLinkedList<Date> > *items = this->ctrl->getAll();
    Multimap<SinglyLinkedList<Date> >::MultimapIterator *i = new Multimap<SinglyLinkedList<Date> >::MultimapIterator(items->getStart());

    if (items->getLength() > 0)
    {
        while (items->getNext(i) != NULL)
            if (*items->getCurrent(i)->getKey() == id)
            {
                items->getCurrent(i)->getValue()->printSLL();
                return;
            }
        cout << "There is no client with the specified ID.\n";
    }
    else
        cout << "There are no clients";
}

void Console::loop()
{
    while (1)
    {
        printMenu();
        cout << "Input command: ";
        int command = getInteger();
        if (command == 0) break;
        if (command == 1) addTransaction();
        if (command == 2) removeCustomer();
        if (command == 3) removeTransaction();
        if (command == 4) viewAllCustomerID();
        if (command == 5) viewCustomerTransactions();

        cout << "\n\n";
    }
}

void Console::runApp()
{
    int *a = (int*)malloc(sizeof(int));
    this->loop();
}
