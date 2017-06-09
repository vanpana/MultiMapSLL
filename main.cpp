#include <iostream>
#include "UI/Console.h"

int main()
{
    Repository *repo = new FileRepository("data/bankaccounts.txt");
    //Repository *repo = new Repository();  
    Controller *ctrl = new Controller(repo);
    Console *ui = new Console(ctrl);

    ui->runApp();

    delete ui;

    return 0;
}
