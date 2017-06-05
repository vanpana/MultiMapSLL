#include "../Controller/Controller.h"
#include "string.h"

using namespace std;

class Console
{
private:
    Controller *ctrl;

public:
    Console() { }
    Console(Controller *ctrl) { this->ctrl = ctrl; }

    void printMenu();

    int getInteger();
    string getString();

    void addTransaction();
    void removeCustomer();
    void removeTransaction();
    void viewAllCustomerID();
    void viewCustomerTransactions();

    void loop();
    void runApp();

    ~Console() { }
};
