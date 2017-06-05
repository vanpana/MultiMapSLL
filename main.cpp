#include <iostream>
#include "UI/Console.h"

int main()
{
    Repository *repo = new FileRepository("data/bankaccounts.txt");
    Controller *ctrl = new Controller(repo);
    Console *ui = new Console(ctrl);

    ui->runApp();
    return 0;
}
