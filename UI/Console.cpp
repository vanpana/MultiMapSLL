#include "Console.h"
#include <sstream>

string *splitString(string temp, char separator)
{
    string* args = new string[5];
    stringstream ss(temp);
    string token;
    int i = 0;

    while(getline(ss, token, separator))
        args[i++] = token;

    return args;
}

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
    Node<SinglyLinkedList<Date> > *current = items->getStart();

    cout << "There are " << items->getLength() << " clients.\n";

    if (items->getLength() > 0)
        while (current != NULL)
        {
            cout << "Client with ID " << *current->getKey() << "\n";
            current = current->getNext();
        }
}

void Console::viewCustomerTransactions()
{
    cout << "Input customer ID: ";
    int id = getInteger();

    Multimap<SinglyLinkedList<Date> > *items = this->ctrl->getAll();
    Node<SinglyLinkedList<Date> > *current = items->getStart();

    if (items->getLength() > 0)
    {
        while (current != NULL)
        {
            if (*current->getKey() == id)
            {
                current->getValue()->printSLL();
                return;
            }
            current = current->getNext();
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
